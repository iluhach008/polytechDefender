//---------------------------------------------------------------------------

#ifndef MainH
#define MainH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.TabControl.hpp>
#include <FMX.Types.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Layouts.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TTabControl *tc;
	TTabItem *t_menu;
	TTabItem *t_game;
	TTabItem *t_result;
	TToolBar *TB_menu;
	TLabel *name_game;
	TButton *b_info;
	TButton *b_startNewGame;
	TToolBar *TB_game;
	TButton *b_back;
	TLayout *Gpan;
	void __fastcall b_infoClick(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall b_startNewGameClick(TObject *Sender);
	void __fastcall b_backClick(TObject *Sender);
	void __fastcall ImageClick(TObject* Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
