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
//������ � ����
System::Void TicTacToe::StartForm::label1_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}
//������ ������ ������ ����
System::Void TicTacToe::StartForm::listBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)

	{
		sound->Play(); //��������������� �����
	}
//������ "� ���������"
	System::Void TicTacToe::StartForm::����������ToolStripMenuItem_Click(System::Object ^ sender, System::EventArgs ^ e)
	{
		sound->Play(); //��������������� �����
		{

			MessageBox::Show(" \"���� ��������-������ v1.0\".", "�����������: ���������� ���� ���������.");

		}
	}
//������ "�����"
System::Void TicTacToe::StartForm::�����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	sound->Play(); //��������������� �����
	Application::Exit();
}
System::Void TicTacToe::StartForm::�����2ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	sound->Play(); //��������������� �����
	Application::Exit();
}
//������ "������ ����"
System::Void TicTacToe::StartForm::buttonStartGame_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}
//������ "������ ����"
System::Void TicTacToe::StartForm::buttonStartGame_Click_1(System::Object^ sender, System::EventArgs^ e)
{
	sound->Play(); //��������������� �����

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
