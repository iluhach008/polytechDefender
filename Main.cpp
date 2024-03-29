//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;
int GamePole[4][4];
TImage *GameImgPole[4][4];
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::b_infoClick(TObject *Sender)
{
	ShowMessage("���� � ������� ��� ��������� �������� ���������� ������� �� ������� ���� �������\n\n�����: ������ ����");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
	tc->TabPosition = TTabPosition::None;
	tc->ActiveTab = t_menu;
	GamePole[0][0] = 5;
	GamePole[0][1] = 1;
	GamePole[0][2] = 1;
	GamePole[0][3] = 0;
	GamePole[1][0] = 0;
	GamePole[1][1] = 0;
	GamePole[1][2] = 1;
	GamePole[1][3] = 0;
	GamePole[2][0] = 0;
	GamePole[2][1] = 0;
	GamePole[2][2] = 1;
	GamePole[2][3] = 0;
	GamePole[3][0] = 0;
	GamePole[3][1] = 0;
	GamePole[3][2] = 1;
	GamePole[3][3] = 6;

	int width = Gpan->Width;
	int height = Gpan->Height;

	float left = (width - 4*50)/2;
	float top = (height - 4*50)/2;

	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			GameImgPole[i][j] = new TImage(Gpan);
			if(GamePole[i][j] == 5){
				GameImgPole[i][j]->Bitmap->LoadFromFile("5.png");
			} else if (GamePole[i][j] == 6) {
				GameImgPole[i][j]->Bitmap->LoadFromFile("6.png");
			} else if (GamePole[i][j] == 0) {
				GameImgPole[i][j]->Bitmap->LoadFromFile("0.png");
			} else if (GamePole[i][j] == 1) {
				GameImgPole[i][j]->Bitmap->LoadFromFile("1.png");
			}
			GameImgPole[i][j]->Parent = Gpan;
			GameImgPole[i][j]->Tag = i*4+j;
			GameImgPole[i][j]->Position->X += left + 50*i;
			GameImgPole[i][j]->Position->Y += top + 50*j;
			GameImgPole[i][j]->OnClick = ImageClick;
		}
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::b_startNewGameClick(TObject *Sender)
{
	tc->GotoVisibleTab(t_game->Index);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::b_backClick(TObject *Sender)
{
	tc->GotoVisibleTab(t_menu->Index);
}
//---------------------------------------------------------------------------


void __fastcall TForm1::ImageClick(TObject* Sender)
{
	TImage*img = dynamic_cast<TImage*>(Sender);
	int i = img->Tag / 4;
	int j = img->Tag % 4;
	ShowMessage(GamePole[i][j]);
}
