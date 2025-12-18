object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 441
  ClientWidth = 620
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  OnCreate = FormCreate
  TextHeight = 15
  object TPageControl
    Left = 0
    Top = 0
    Width = 620
    Height = 441
    ActivePage = TabSheet6
    Align = alClient
    TabOrder = 0
    ExplicitWidth = 618
    ExplicitHeight = 433
    object TabSheet1: TTabSheet
      Caption = #1052#1072#1083#1102#1074#1072#1085#1085#1103' '#1087#1110#1082#1089#1077#1083#1077#1084' '#1110' '#1087#1077#1088#1086#1084
      object Image1: TImage
        Left = 32
        Top = 56
        Width = 297
        Height = 281
      end
      object Button1: TButton
        Left = 32
        Top = 368
        Width = 75
        Height = 25
        Caption = #1055#1110#1082#1089#1077#1083#1100
        TabOrder = 0
        OnClick = Button1Click
      end
      object Button2: TButton
        Left = 142
        Top = 368
        Width = 75
        Height = 25
        Caption = #1055#1077#1088#1086
        TabOrder = 1
        OnClick = Button2Click
      end
      object RadioGroup1: TRadioGroup
        Left = 368
        Top = 80
        Width = 185
        Height = 105
        Caption = 'RadioGroup1'
        Items.Strings = (
          #1058#1086#1095#1082#1080
          #1042#1110#1076#1088#1110#1079#1082#1080)
        TabOrder = 2
      end
      object Button3: TButton
        Left = 264
        Top = 368
        Width = 75
        Height = 25
        Caption = #1054#1090#1095#1080#1089#1090#1082#1072
        TabOrder = 3
        OnClick = Button3Click
      end
    end
    object TabSheet2: TTabSheet
      Caption = #1060#1110#1075#1091#1088#1080
      ImageIndex = 1
      object Image2: TImage
        Left = 64
        Top = 80
        Width = 249
        Height = 233
      end
      object Button4: TButton
        Left = 496
        Top = 344
        Width = 75
        Height = 25
        Caption = #1055#1086#1082#1072#1079#1072#1090#1080
        TabOrder = 0
        OnClick = Button4Click
      end
    end
    object TabSheet3: TTabSheet
      Caption = #1057#1090#1080#1083#1110' '#1083#1110#1085#1110#1081
      ImageIndex = 2
      object Image3: TImage
        Left = 56
        Top = 80
        Width = 241
        Height = 241
      end
      object Button5: TButton
        Left = 496
        Top = 344
        Width = 75
        Height = 25
        Caption = #1055#1086#1082#1072#1079#1072#1090#1080
        TabOrder = 0
        OnClick = Button5Click
      end
    end
    object TabSheet4: TTabSheet
      Caption = #1057#1080#1085#1091#1089#1086#1111#1076#1080
      ImageIndex = 3
      object Image4: TImage
        Left = 16
        Top = 24
        Width = 233
        Height = 233
      end
      object Image5: TImage
        Left = 352
        Top = 24
        Width = 233
        Height = 233
      end
      object Button6: TButton
        Left = 510
        Top = 368
        Width = 75
        Height = 25
        Caption = #1055#1086#1082#1072#1079#1072#1090#1080
        TabOrder = 0
        OnClick = Button6Click
      end
    end
    object TabSheet5: TTabSheet
      Caption = #1052#1091#1083#1100#1090#1080#1087#1083#1110#1082#1072#1094#1110#1103
      ImageIndex = 4
      object Image6: TImage
        Left = 40
        Top = 56
        Width = 265
        Height = 265
      end
      object Button7: TButton
        Left = 496
        Top = 360
        Width = 75
        Height = 25
        Caption = #1057#1090#1086#1087'/'#1055#1091#1089#1082
        TabOrder = 0
        OnClick = Button7Click
      end
    end
    object TabSheet6: TTabSheet
      Caption = #1055#1077#1088#1086' '#1110' '#1087#1077#1085#1079#1077#1083#1100
      ImageIndex = 5
      object Image7: TImage
        Left = 24
        Top = 80
        Width = 225
        Height = 217
        OnMouseDown = Image7MouseDown
      end
      object Button8: TButton
        Left = 96
        Top = 360
        Width = 75
        Height = 25
        Caption = #1054#1090#1095#1080#1089#1090#1082#1072
        TabOrder = 0
        OnClick = Button8Click
      end
      object RadioGroup2: TRadioGroup
        Left = 296
        Top = 3
        Width = 233
        Height = 118
        Caption = #1044#1110#1111
        Items.Strings = (
          #1055#1088#1103#1084#1086#1082#1091#1090#1085#1080#1082
          ' '#1045#1083#1110#1087#1089
          #1058#1077#1082#1089#1090
          #1047#1072#1083#1080#1074#1082#1072)
        TabOrder = 1
      end
      object RadioGroup3: TRadioGroup
        Left = 296
        Top = 127
        Width = 233
        Height = 122
        Caption = #1057#1090#1080#1083#1110' '#1082#1080#1089#1090#1077#1081
        Items.Strings = (
          'bsSolid'
          'bsCross'
          'bsDiagCross'
          'bsVertical')
        TabOrder = 2
      end
      object RadioGroup4: TRadioGroup
        Left = 296
        Top = 255
        Width = 233
        Height = 130
        Caption = #1056#1077#1078#1080#1084#1080' '#1087#1077#1088#1072
        Items.Strings = (
          'pmCopy'
          'pmXor'
          'pmNotXor')
        TabOrder = 3
      end
    end
  end
  object Timer1: TTimer
    Enabled = False
    Interval = 500
    OnTimer = Timer1Timer
    Left = 572
    Top = 50
  end
end
