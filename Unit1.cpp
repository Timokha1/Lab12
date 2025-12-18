#include <vcl.h>
#pragma hdrstop
#include "Unit1.h"
#include <math.h>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

#ifndef M_PI
#define M_PI 3.1415926535
#endif

__fastcall TForm1::TForm1(TComponent* Owner) : TForm(Owner) {}

void __fastcall TForm1::FormCreate(TObject *Sender) {
	randomize();
	num = 0; H = 30; Xpos = 60; Ypos = 120;
	Hmen = 30; Rhead = 10; Rhead2 = 5; revers = 1; L = 42;

	Image6->Canvas->Pen->Width = 4;
	Image6->Canvas->MoveTo(0, Ypos + 3);
	Image6->Canvas->LineTo(Image6->Width, Ypos + 3);
	Image6->Canvas->Pen->Width = 1;
	Image6->Canvas->Pen->Mode = pmNotXor;
}

void __fastcall TForm1::Button1Click(TObject *Sender) {
	int a=100, cx, cy;
	cx=Image1->Width/2; cy=Image1->Height/2;
	for (int i=0; i<=180; i++) {
		int px=(int)(a*pow(cos(2*M_PI*i/180),3));
		int py=(int)(a*pow(sin(2*M_PI*i/180),3));
		Image1->Canvas->Pixels[cx+px][cy+py]=clBlue;
	}
}

void __fastcall TForm1::Button2Click(TObject *Sender) {
	int a=100, cx, cy;
	cx=Image1->Width/2; cy=Image1->Height/2;
	Image1->Canvas->Pen->Color=clRed;
	Image1->Canvas->MoveTo(cx + a, cy);
	for (int i=0; i<=180; i++) {
		int px=(int)(a*pow(cos(2*M_PI*i/180),3));
		int py=(int)(a*pow(sin(2*M_PI*i/180),3));
		Image1->Canvas->LineTo(cx+px, cy+py);
	}
}

void __fastcall TForm1::Button3Click(TObject *Sender) {
	Image1->Canvas->FillRect(Rect(0,0,Image1->Width,Image1->Height));
}

void __fastcall TForm1::Button4Click(TObject *Sender) {
	Image2->Canvas->Font->Style << fsBold;
	Image2->Canvas->Arc(10,10,90,90,90,50,10,50);
	Image2->Canvas->TextOut(40,60,"Arc");
	Image2->Canvas->Brush->Color = clYellow;
	Image2->Canvas->Ellipse(210,10,290,50);
	TPoint pts[3] = {Point(30,150), Point(50,120), Point(70,150)};
	Image2->Canvas->Polygon(pts, 2);
}

void __fastcall TForm1::Button5Click(TObject *Sender) {
	for (int i=1; i<8; i++) {
		Image3->Canvas->Pen->Style = (TPenStyle)(i-1);
		Image3->Canvas->MoveTo(50, i*20);
		Image3->Canvas->LineTo(250, i*20);
	}
}

void __fastcall TForm1::Button6Click(TObject *Sender) {
	float X, Y; int PX, PY;
	Image5->Canvas->MoveTo(0, Image5->Height/2);
	for (PX=0; PX <= Image4->Width; PX++) {
		X = PX * 4.0 * M_PI / Image4->Width;
		Y = sin(X);
		PY = Image4->Height/2 - (Y * Image4->Height/4);
		Image4->Canvas->Pixels[PX][PY] = clBlack;
		Image5->Canvas->LineTo(PX, PY);
	}
}

void __fastcall TForm1::Draw() {
	short int Yhead;
	if (num == 0) Yhead = Ypos - H - Hmen;
	else Yhead = Ypos - L - Hmen;
	Image6->Canvas->MoveTo(Xpos-H, Ypos);
	Image6->Canvas->LineTo(Xpos, Ypos-H);
	Image6->Canvas->LineTo(Xpos, Yhead);
	Image6->Canvas->Ellipse(Xpos-Rhead, Yhead-2*Rhead, Xpos+Rhead, Yhead);
}

void __fastcall TForm1::Timer1Timer(TObject *Sender) {
	Draw();
	if ((Xpos >= Image6->Width - H) || (Xpos <= H)) revers = -revers;
	Xpos += revers * H;
	num = 1 - num;
	Draw();
}

void __fastcall TForm1::Button7Click(TObject *Sender) {
	Timer1->Enabled = !Timer1->Enabled;
}

void __fastcall TForm1::Image7MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift, int X, int Y) {
	int sx = random(100), sy = random(100);
	Image7->Canvas->Brush->Color = (TColor)(clGreen + sx*sy);
	Image7->Canvas->Pen->Mode = (TPenMode)RadioGroup4->ItemIndex;
	Image7->Canvas->Brush->Style = (TBrushStyle)RadioGroup3->ItemIndex;

	switch(RadioGroup2->ItemIndex) {
		case 0: Image7->Canvas->Rectangle(X, Y, X+sx, Y+sy); break;
		case 1: Image7->Canvas->Ellipse(X, Y, X+sx, Y+sy); break;
		case 2: Image7->Canvas->TextOut(X, Y, "Графіка C++"); break;
		case 3: Image7->Canvas->FloodFill(X, Y, clWhite, fsSurface); break;
	}
}

void __fastcall TForm1::Button8Click(TObject *Sender) {
	Image7->Canvas->Brush->Color = clWhite;
	Image7->Canvas->Brush->Style = bsSolid;
	Image7->Canvas->FillRect(Rect(0,0,Image7->Width,Image7->Height));
}
