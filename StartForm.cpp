#include "StartForm.h"
#include "GameForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	TicTacToe::StartForm form;
	Application::Run(% form);
}

System::Void TicTacToe::StartForm::flowLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
{

}
//Кнопка в меню
System::Void TicTacToe::StartForm::label1_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}
//Кнопка выбора режима игры
System::Void TicTacToe::StartForm::listBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)

	{
		sound->Play(); //воспроизведение звука
	}
//Кнопка "О программе"
	System::Void TicTacToe::StartForm::оПрограммеToolStripMenuItem_Click(System::Object ^ sender, System::EventArgs ^ e)
	{
		sound->Play(); //воспроизведение звука
		{

			MessageBox::Show(" \"Игра Крестики-Нолики v1.0\".", "Разработчик: Павловский Егор Сергеевич.");

		}
	}
//Кнопка "Выход"
System::Void TicTacToe::StartForm::выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	sound->Play(); //воспроизведение звука
	Application::Exit();
}
System::Void TicTacToe::StartForm::выход2ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	sound->Play(); //воспроизведение звука
	Application::Exit();
}
//Кнопка "Начало игры"
System::Void TicTacToe::StartForm::buttonStartGame_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}
//Кнопка "Начало игры"
System::Void TicTacToe::StartForm::buttonStartGame_Click_1(System::Object^ sender, System::EventArgs^ e)
{
	sound->Play(); //воспроизведение звука

	int indexGameMode = listBox1GameMode->SelectedIndex;

	int size;
	size = Convert::ToInt32(numericUpDownSizeMap->Value);

	numericUpDownLength->Maximum = size;
	int length = Convert::ToInt32(numericUpDownLength->Value);

	GameForm^ form = gcnew GameForm();
	form->rows = size;
	form->columns = size;
	form->length = length;
	form->selectedGameMode = indexGameMode;
	form->Show();
	this->Hide();
}
