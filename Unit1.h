#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ComCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:
TPageControl *PageControl1;
	TTabSheet *TabSheet1; TTabSheet *TabSheet2; TTabSheet *TabSheet3;
	TTabSheet *TabSheet4; TTabSheet *TabSheet5; TTabSheet *TabSheet6;
	TImage *Image1; TImage *Image2; TImage *Image3;
	TImage *Image4; TImage *Image5; TImage *Image6; TImage *Image7;
	TButton *Button1; TButton *Button2; TButton *Button3;
	TButton *Button4; TButton *Button5; TButton *Button6;
	TButton *Button7; TButton *Button8;
	TTimer *Timer1;
	TRadioGroup *RadioGroup1; TRadioGroup *RadioGroup2;
	TRadioGroup *RadioGroup3; TRadioGroup *RadioGroup4;

	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall Button5Click(TObject *Sender);
	void __fastcall Button6Click(TObject *Sender);
	void __fastcall Button7Click(TObject *Sender);
	void __fastcall Button8Click(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall Image7MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift, int X, int Y);
	void __fastcall FormCreate(TObject *Sender);

public:
	__fastcall TForm1(TComponent* Owner);
	void __fastcall Draw();
	short int num, H, Xpos, Ypos, Hmen, Rhead, Rhead2, revers, L;
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
