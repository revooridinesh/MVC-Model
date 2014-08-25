#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::TextBox^  URL_Text;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  Select_File;
	private: System::Windows::Forms::Button^  Add_button;
	private: System::Windows::Forms::Button^  Modify;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  Count_Text;
	private: System::Windows::Forms::TextBox^  Energy_Text;


	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  Delete_Button;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::TextBox^  Search_Text;
	private: System::Windows::Forms::Button^  Search_button;
	private: System::Windows::Forms::Button^  update_button;
	private: System::Windows::Forms::Button^  Load_Button;
	private: System::Windows::Forms::Button^  Clear_button;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::Button^  Plot_Button;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->URL_Text = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Select_File = (gcnew System::Windows::Forms::Button());
			this->Add_button = (gcnew System::Windows::Forms::Button());
			this->Modify = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Count_Text = (gcnew System::Windows::Forms::TextBox());
			this->Energy_Text = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->Delete_Button = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->Search_Text = (gcnew System::Windows::Forms::TextBox());
			this->Search_button = (gcnew System::Windows::Forms::Button());
			this->update_button = (gcnew System::Windows::Forms::Button());
			this->Load_Button = (gcnew System::Windows::Forms::Button());
			this->Clear_button = (gcnew System::Windows::Forms::Button());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->Plot_Button = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 62);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(49, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Editor";
			// 
			// URL_Text
			// 
			this->URL_Text->Location = System::Drawing::Point(121, 20);
			this->URL_Text->Name = L"URL_Text";
			this->URL_Text->Size = System::Drawing::Size(372, 20);
			this->URL_Text->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 97);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(303, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Enter the Energy Value for which you want to change its Count";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// Select_File
			// 
			this->Select_File->Location = System::Drawing::Point(7, 17);
			this->Select_File->Name = L"Select_File";
			this->Select_File->Size = System::Drawing::Size(75, 23);
			this->Select_File->TabIndex = 4;
			this->Select_File->Text = L"Open";
			this->Select_File->UseVisualStyleBackColor = true;
			this->Select_File->Click += gcnew System::EventHandler(this, &MyForm::Select_File_Click);
			// 
			// Add_button
			// 
			this->Add_button->Location = System::Drawing::Point(371, 198);
			this->Add_button->Name = L"Add_button";
			this->Add_button->Size = System::Drawing::Size(75, 23);
			this->Add_button->TabIndex = 5;
			this->Add_button->Text = L"Add";
			this->Add_button->UseVisualStyleBackColor = true;
			this->Add_button->Click += gcnew System::EventHandler(this, &MyForm::Add_button_Click);
			// 
			// Modify
			// 
			this->Modify->Location = System::Drawing::Point(384, 124);
			this->Modify->Name = L"Modify";
			this->Modify->Size = System::Drawing::Size(75, 23);
			this->Modify->TabIndex = 6;
			this->Modify->Text = L"Modify";
			this->Modify->UseVisualStyleBackColor = true;
			this->Modify->Click += gcnew System::EventHandler(this, &MyForm::Modify_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 127);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 15);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Energy";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(191, 127);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(39, 15);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Count";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// Count_Text
			// 
			this->Count_Text->Location = System::Drawing::Point(250, 126);
			this->Count_Text->Name = L"Count_Text";
			this->Count_Text->Size = System::Drawing::Size(100, 20);
			this->Count_Text->TabIndex = 9;
			// 
			// Energy_Text
			// 
			this->Energy_Text->Location = System::Drawing::Point(68, 127);
			this->Energy_Text->Name = L"Energy_Text";
			this->Energy_Text->Size = System::Drawing::Size(100, 20);
			this->Energy_Text->TabIndex = 10;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(12, 200);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(45, 15);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Energy";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(191, 200);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(39, 15);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Count";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 163);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(303, 13);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Enter the Energy Value for which you want to change its Count";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(68, 199);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 14;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(250, 200);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 15;
			// 
			// Delete_Button
			// 
			this->Delete_Button->Location = System::Drawing::Point(452, 198);
			this->Delete_Button->Name = L"Delete_Button";
			this->Delete_Button->Size = System::Drawing::Size(75, 23);
			this->Delete_Button->TabIndex = 16;
			this->Delete_Button->Text = L"Delete";
			this->Delete_Button->UseVisualStyleBackColor = true;
			this->Delete_Button->Click += gcnew System::EventHandler(this, &MyForm::Delete_Button_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(250, 241);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(277, 358);
			this->richTextBox1->TabIndex = 17;
			this->richTextBox1->Text = L"";
			// 
			// Search_Text
			// 
			this->Search_Text->Location = System::Drawing::Point(111, 340);
			this->Search_Text->Name = L"Search_Text";
			this->Search_Text->Size = System::Drawing::Size(100, 20);
			this->Search_Text->TabIndex = 18;
			// 
			// Search_button
			// 
			this->Search_button->Location = System::Drawing::Point(26, 298);
			this->Search_button->Name = L"Search_button";
			this->Search_button->Size = System::Drawing::Size(75, 23);
			this->Search_button->TabIndex = 19;
			this->Search_button->Text = L"Search";
			this->Search_button->UseVisualStyleBackColor = true;
			this->Search_button->Click += gcnew System::EventHandler(this, &MyForm::Search_button_Click);
			// 
			// update_button
			// 
			this->update_button->Location = System::Drawing::Point(155, 544);
			this->update_button->Name = L"update_button";
			this->update_button->Size = System::Drawing::Size(75, 23);
			this->update_button->TabIndex = 20;
			this->update_button->Text = L"Update";
			this->update_button->UseVisualStyleBackColor = true;
			this->update_button->Click += gcnew System::EventHandler(this, &MyForm::update_button_Click);
			// 
			// Load_Button
			// 
			this->Load_Button->Location = System::Drawing::Point(26, 252);
			this->Load_Button->Name = L"Load_Button";
			this->Load_Button->Size = System::Drawing::Size(75, 23);
			this->Load_Button->TabIndex = 21;
			this->Load_Button->Text = L"Load";
			this->Load_Button->UseVisualStyleBackColor = true;
			this->Load_Button->Click += gcnew System::EventHandler(this, &MyForm::Load_Button_Click);
			// 
			// Clear_button
			// 
			this->Clear_button->Location = System::Drawing::Point(136, 252);
			this->Clear_button->Name = L"Clear_button";
			this->Clear_button->Size = System::Drawing::Size(75, 23);
			this->Clear_button->TabIndex = 22;
			this->Clear_button->Text = L"Clear";
			this->Clear_button->UseVisualStyleBackColor = true;
			this->Clear_button->Click += gcnew System::EventHandler(this, &MyForm::Clear_button_Click);
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(562, 75);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Legend = L"Legend1";
			series1->Name = L"Count";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(727, 524);
			this->chart1->TabIndex = 23;
			this->chart1->Text = L"chart1";
			// 
			// Plot_Button
			// 
			this->Plot_Button->Location = System::Drawing::Point(562, 29);
			this->Plot_Button->Name = L"Plot_Button";
			this->Plot_Button->Size = System::Drawing::Size(75, 23);
			this->Plot_Button->TabIndex = 24;
			this->Plot_Button->Text = L"Plot";
			this->Plot_Button->UseVisualStyleBackColor = true;
			this->Plot_Button->Click += gcnew System::EventHandler(this, &MyForm::Plot_Button_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1301, 601);
			this->Controls->Add(this->Plot_Button);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->Clear_button);
			this->Controls->Add(this->Load_Button);
			this->Controls->Add(this->update_button);
			this->Controls->Add(this->Search_button);
			this->Controls->Add(this->Search_Text);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->Delete_Button);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->Energy_Text);
			this->Controls->Add(this->Count_Text);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Modify);
			this->Controls->Add(this->Add_button);
			this->Controls->Add(this->Select_File);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->URL_Text);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"Controller                                                                     Mo"
				L"del View Controller Model                                                       "
				L"          View         ";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		String^ strfilename;
		String^ gedfilename;
		int flag = 0;

private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	}

private: System::Void Select_File_Click(System::Object^  sender, System::EventArgs^  e) {


			 //Selects a file
			 OpenFileDialog ^ openFileDialog1 = gcnew OpenFileDialog();
			 if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			 {
				 strfilename = openFileDialog1->InitialDirectory + openFileDialog1->FileName;
				 URL_Text->Text = strfilename;
				 gedfilename = strfilename;
			 }
			 else
			 {
				 MessageBox::Show("Invalid/No File Selected");
			 }
}

private: System::Void Modify_Click(System::Object^  sender, System::EventArgs^  e) {


			 int Count;
			 int Index;
			 int mod_count = 0;
			 double Energy;
			 String^ edfilename;
			 //Checks whether a file is selected or not
			 if (URL_Text->TextLength == 0)
			 {
				 MessageBox::Show("Select a File by clicking Select File button");
				 Energy_Text->Clear();
				 Count_Text->Clear();
			 }
			 else
			 {
				 //Validates for empty text boxes
				 if (Energy_Text->TextLength == 0 || Count_Text->TextLength == 0)
				 {
					 MessageBox::Show("Please Enter Enerygy AND Count Values you want to Modify");
					 Energy_Text->Clear();
					 Count_Text->Clear();
				 }

				 else
				 {
					 //Reads data from the text boxes, throws an exception for invalid data or streamreader fail(less chance)

					 try
					 {
						 Energy = Convert::ToDouble(Energy_Text->Text);
						 Count = Convert::ToInt16(Count_Text->Text);
						 //Checks whether there is any previous update
						 StreamReader^ sr;
						 if (flag == 1)
						 {
							 sr = gcnew StreamReader(gedfilename);
						 }
						 else
						 {

							 sr = gcnew StreamReader(strfilename);
						 }

						 // Adding date and time to Editing File name

						 Index = strfilename->IndexOf('.');
						 String^ date;
						 date = Convert::ToString(DateTime::Now);
						 date = date->Replace('/', '-');
						 date = date->Replace(':', '-');
						 date = date->Replace(' ', '_');
						 edfilename = strfilename->Insert(Index, String::Concat(" ", date));
						 edfilename = edfilename->Insert(Index - 4, "_Edited_");
						 StreamWriter^ sw = gcnew StreamWriter(edfilename);

						 //Loops through the data files and looks for a match, if there is a match updates it
						 String^ line;
						 sw->WriteLine(sr->ReadLine());
						 while ((line = sr->ReadLine()) != nullptr)
						 {
							 Index = line->IndexOf(',');
							 if (Energy == (Convert::ToDouble(line->Substring(0, Index))))
							 {
								 line = String::Concat(Convert::ToString(Energy), ",", Convert::ToString(Count));
								 mod_count++;
							 }
							 sw->WriteLine(line);
						 }

						 //Initmating the user whether the date has been modified or not
						 sr->Close();
						 sw->Close();
						 if (mod_count > 0)
						 {
							 if (flag == 1)
								 File::Delete(gedfilename);
							 flag = 1;
							 gedfilename = edfilename;
							 MessageBox::Show("Data Has been Modified");
							 Energy_Text->Clear();
							 Count_Text->Clear();
						 }
						 else
						 {
							 File::Delete(edfilename);
							 MessageBox::Show("NO Data Found");
							 Energy_Text->Clear();
							 Count_Text->Clear();
						 }
					 }

					 // Let the user know what went wrong.
					 catch (Exception^ e)
					 {
						 Console::WriteLine("The file could not be read:");
						 Console::WriteLine(e->Message);
						 MessageBox::Show("INVALID Input Values");
					 }
				 }
			 }

}

private: System::Void Add_button_Click(System::Object^  sender, System::EventArgs^  e) {


			 int Count;
			 int Index;
			 double Energy;
			 double prev_energy;
			 String^ edfilename;
			 int found = 0;
			 //Validates whether a file is selected or not
			 if (URL_Text->TextLength == 0)
			 {
				 MessageBox::Show("Select a File by clicking Select File button");
				textBox1->Clear();
				 textBox2->Clear();
			 }
			 else
			 {
				 //Validates whether there is any data or not
				 if (textBox1->TextLength == 0 || textBox2->TextLength == 0)
				 {
					 MessageBox::Show("Please Enter Enerygy AND Count Values you want to ADD");
					 textBox1->Clear();
					 textBox2->Clear();
				 }
				 else
				 {
					 //the occassion a exception occurs in below try block is when user entered invalid data or
					 //streamreader fails to read  file(this chance is low as we are validating the file initally)
					 try
					 {
						 Energy = Convert::ToDouble(textBox1->Text);
						 Count = Convert::ToInt16(textBox2->Text);

						 StreamReader^ sr;
						 if (flag == 1)
						 {
							 sr = gcnew StreamReader(gedfilename);
						 }
						 else
						 {
							 sr = gcnew StreamReader(strfilename);
						 }

						 //Naming the File name with Current Date and Time
						 Index = strfilename->IndexOf('.');
						 String^ date;
						 date = Convert::ToString(DateTime::Now);
						 date = date->Replace('/', '-');
						 date = date->Replace(':', '-');
						 date = date->Replace(' ', '_');
						 edfilename = strfilename->Insert(Index, String::Concat(" ", date));
						 edfilename = edfilename->Insert(Index - 4, "_Edited_");
						 StreamWriter^ sw = gcnew StreamWriter(edfilename);

						 String^ line;
						 String^ prev_line;
						 String^ add;

						 //Forming the line which has to be added to the file using the values USER entered
						 add = String::Concat(Convert::ToString(Energy), ",", Convert::ToString(Count));

						 //Checks whether the Entered Values comes first or not if yes raises flag Found
						 sw->WriteLine(sr->ReadLine());
						 prev_line = sr->ReadLine();
						 Index = prev_line->IndexOf(',');
						 prev_energy = Convert::ToDouble(prev_line->Substring(0, Index));

						 if (Energy < prev_energy)
						 {
							 sw->WriteLine(add);
							 found = 1;
						 }
						 sw->WriteLine(prev_line);

						 //Finds the line where the Entered Values should store and writes the 'add' to that line
						 while ((line = sr->ReadLine()) != nullptr)
						 {
							 Index = line->IndexOf(',');
							 if (found == 0)
							 {
								 if (prev_energy < Energy && Energy < (Convert::ToDouble(line->Substring(0, Index))))
								 {
									 sw->WriteLine(add);
									 found = 1;
								 }

								 if (Energy == prev_energy || Energy == (Convert::ToDouble(line->Substring(0, Index))))
									 found = 2;
							 }

							 sw->WriteLine(line);
							 prev_line = line;
							 Index = prev_line->IndexOf(',');
							 prev_energy = Convert::ToDouble(prev_line->Substring(0, Index));

						 }

						 // If No Match found, add the data at the end
						 if (found == 0)
						 {
							 sw->WriteLine(add);
							 found = 1;
						 }
						 sr->Close();
						 sw->Close();
						 //Intimate the user about the result
						 if (found == 1)
						 {
							 if (flag == 1)
								 File::Delete(gedfilename);
							 flag = 1;
							 gedfilename = edfilename;
							 MessageBox::Show("Data Has been Added");
							 textBox1->Clear();
							 textBox2->Clear();
						 }
						 if (found == 2)
						 {
							 File::Delete(edfilename);
							 MessageBox::Show("Entered Energy Already Present");
							 textBox1->Clear();
							 textBox2->Clear();
						 }

					 }
					 // Let the user know what went wrong.
					 catch (Exception^ e)
					 {
						 Console::WriteLine("The file could not be read:");
						 Console::WriteLine(e->Message);
						 MessageBox::Show("INVALID Input Values");

					 }
				 }
			 }
}

private: System::Void Delete_Button_Click(System::Object^  sender, System::EventArgs^  e) {

			 int Index;
			 double Energy;
			 String^ edfilename;
			 int found = 0;
			 int garb;
			 garb = textBox2->TextLength;
			 
			 //Checks whether a file is selected or not
			 if (URL_Text->TextLength == 0)
			 {
				 MessageBox::Show("Select a File by clicking Select File button");
				 //And clears the data from textboxes
				 textBox1->Clear();
				 textBox2->Clear();
			 }
			 else
			 {
				 //Validates the textbox for empty string
				 if (textBox1->TextLength == 0)
				 {
					 MessageBox::Show("Please Enter Enerygy Value you want to Delete");
					 textBox1->Clear();
					 textBox2->Clear();
				 }

				 else
				 {
					 //If user enters any data other than numbers, it throws an exception
					 try
					 {
						 Energy = Convert::ToDouble(textBox1->Text);
						 //Checks whether if file is updated previously or not
						 StreamReader^ sr;
						 if (flag == 1)
						 {
							 sr = gcnew StreamReader(gedfilename);
						 }
						 else
						 {

							 sr = gcnew StreamReader(strfilename);
						 }

						 //Naming the File name with Current Date and Time
						 Index = strfilename->IndexOf('.');
						 String^ date;
						 date = Convert::ToString(DateTime::Now);
						 date = date->Replace('/', '-');
						 date = date->Replace(':', '-');
						 date = date->Replace(' ', '_');
						 edfilename = strfilename->Insert(Index, String::Concat(" ", date));
						 edfilename = edfilename->Insert(Index - 4, "_Edited_");
						 StreamWriter^ sw = gcnew StreamWriter(edfilename);

						 String^ line;
						 sw->WriteLine(sr->ReadLine());

						 //Finds the line where the Entered Values is present and deletes that line
						 while ((line = sr->ReadLine()) != nullptr)
						 {
							 Index = line->IndexOf(',');
							 if (Energy == (Convert::ToDouble(line->Substring(0, Index))))
							 {								 
								 Count_Text->Text = line->Substring(Index + 1);
								 found = 1;
							 }
							 else
							 {
								 sw->WriteLine(line);
							 }
						 }

						 sr->Close();
						 sw->Close();
						 //Notifies the USER about the result
						 if (found == 1)
						 {
							 if (flag == 1)
								 File::Delete(gedfilename);
							 flag = 1;
							 gedfilename = edfilename;
							 MessageBox::Show("Data Has been Deleted");
							 textBox1->Clear();
							 textBox2->Clear();
						 }
						 else
						 {
							 MessageBox::Show("NO Data Found");
							 textBox1->Clear();
							 textBox2->Clear();
						 }

					 }
					 //The only chance of exception in above try block is when invalid data is entered
					 catch (...)
					 {
						 MessageBox::Show("INVALID Input Values");
					 }
				 }
			 }
}

private: System::Void Load_Button_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 try
			 {
				 richTextBox1->Text = File::ReadAllText(gedfilename);;
			 }
			 catch (...)
			 {
				 MessageBox::Show("Pease Select a File");
			 }
}

private: System::Void Clear_button_Click(System::Object^  sender, System::EventArgs^  e) {
			 richTextBox1->Clear();
}

private: System::Void Search_button_Click(System::Object^  sender, System::EventArgs^  e) {
			
			 int var=1;
			 if (Search_Text->TextLength == 0)
				 MessageBox::Show("Please Enter data");
			 else
			 {
				 int index = 0;
				 var = 0;
				 String^ temp = richTextBox1->Text;
				 richTextBox1->Text = "";
				 richTextBox1->Text = temp;
				 while (index < richTextBox1->Text->LastIndexOf(Search_Text->Text))
				 {

					 richTextBox1->Find(Search_Text->Text, index, richTextBox1->TextLength, RichTextBoxFinds::None);
					 richTextBox1->SelectionBackColor = Color::Red;
					 index = richTextBox1->Text->IndexOf(Search_Text->Text, index) + 1;
					 var++;
				 }
			 }
			 if (!var)
			 {
				 MessageBox::Show("NO Match Found");
			 }
}

private: System::Void update_button_Click(System::Object^  sender, System::EventArgs^  e) {
			 int Index;
			 try{
				 //Saves the file from richtextbox by replacing the existing file
				 StreamWriter^ swa;
				 if (flag == 1)
				 {
					 swa = gcnew StreamWriter(gedfilename);
					 }
				 else
				 {
					 Index = strfilename->IndexOf('.');
					 String^ date;
					 date = Convert::ToString(DateTime::Now);
					 date = date->Replace('/', '-');
					 date = date->Replace(':', '-');
					 date = date->Replace(' ', '_');
					 gedfilename = strfilename->Insert(Index, String::Concat(" ", date));
					 gedfilename = gedfilename->Insert(Index - 4, "_Edited_");
					 swa = gcnew StreamWriter(gedfilename);
					 flag = 1;
				 }
				 swa->Write(richTextBox1->Text);
				 swa->Close();
				 MessageBox::Show("File Saved");

			 }
			 catch (...)
			 {
				 MessageBox::Show("Pease Select a File");
			 }
}

private: System::Void Plot_Button_Click(System::Object^  sender, System::EventArgs^  e) {

			     int Count;
				 int Index;
				 double Enerygy;
				 //Clears the chart values before every plot
				 this->chart1->Series["Count"]->Points->Clear();
				 
				 try
				 {
					 //Plotting the Graph using chart methods
					 StreamReader^ sr = gcnew StreamReader(gedfilename);
					 String^ line;
					 sr->ReadLine();
					 while ((line = sr->ReadLine()) != nullptr)
					 {
						 Index = line->IndexOf(',');
						 Enerygy = Convert::ToDouble(line->Substring(0, Index));
						 Count = Convert::ToInt16(line->Substring(Index + 1));
						 this->chart1->Series["Count"]->Points->AddXY(Enerygy, Count);
						 					 
					 }
					 sr->Close();
				 }
				 catch (...)
				 {

					 MessageBox::Show("The file could not be read/open");
				 }

}

};

}
