#pragma once

#include <opencv2/opencv.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/objdetect/aruco_detector.hpp>
#include <opencv2/objdetect/aruco_dictionary.hpp>
//using namespace System::IO::StreamWriter;

//using namespace std;
//#include <iostream>
using namespace cv;
using namespace aruco;
//using namespace std;


namespace ProjectOpencv {

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
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ applyBtn;
	private: System::Windows::Forms::Button^ resetBtn;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ saveBtn;
	protected:

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->applyBtn = (gcnew System::Windows::Forms::Button());
			this->resetBtn = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->saveBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(50, 37);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(214, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(54, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Top-Right";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(50, 83);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(217, 89);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Top-Left";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(50, 129);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(220, 129);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(68, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Bottom Right";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(50, 175);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(223, 175);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(61, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Bottom Left";
			// 
			// applyBtn
			// 
			this->applyBtn->Location = System::Drawing::Point(75, 244);
			this->applyBtn->Name = L"applyBtn";
			this->applyBtn->Size = System::Drawing::Size(75, 23);
			this->applyBtn->TabIndex = 8;
			this->applyBtn->Text = L"Apply";
			this->applyBtn->UseVisualStyleBackColor = true;
			this->applyBtn->Click += gcnew System::EventHandler(this, &MyForm::applyBtn_Click);
			// 
			// resetBtn
			// 
			this->resetBtn->Location = System::Drawing::Point(226, 244);
			this->resetBtn->Name = L"resetBtn";
			this->resetBtn->Size = System::Drawing::Size(75, 23);
			this->resetBtn->TabIndex = 9;
			this->resetBtn->Text = L"Reset";
			this->resetBtn->UseVisualStyleBackColor = true;
			this->resetBtn->Click += gcnew System::EventHandler(this, &MyForm::resetBtn_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(321, 37);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 10;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(321, 86);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 11;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(321, 129);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 12;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(321, 175);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 20);
			this->textBox8->TabIndex = 13;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(428, 43);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(12, 13);
			this->label5->TabIndex = 14;
			this->label5->Text = L"y";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(427, 90);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(12, 13);
			this->label6->TabIndex = 15;
			this->label6->Text = L"y";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(427, 129);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(12, 13);
			this->label7->TabIndex = 16;
			this->label7->Text = L"y";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(427, 178);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(12, 13);
			this->label8->TabIndex = 17;
			this->label8->Text = L"y";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(226, 210);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 13);
			this->label9->TabIndex = 18;
			// 
			// saveBtn
			// 
			this->saveBtn->Location = System::Drawing::Point(366, 243);
			this->saveBtn->Name = L"saveBtn";
			this->saveBtn->Size = System::Drawing::Size(75, 23);
			this->saveBtn->TabIndex = 19;
			this->saveBtn->Text = L"Save ";
			this->saveBtn->UseVisualStyleBackColor = true;
			this->saveBtn->Click += gcnew System::EventHandler(this, &MyForm::saveBtn_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(496, 302);
			this->Controls->Add(this->saveBtn);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->resetBtn);
			this->Controls->Add(this->applyBtn);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void applyBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	
		System::String^ topRight = this->textBox1->Text;
		System::String^ topRight_y = this->textBox5->Text;

		System::String^ topLeft = this->textBox2->Text;
		System::String^ topLeft_y = this->textBox6->Text;

		System::String^ bottomRight= this->textBox3->Text;
		System::String^ bottomRight_y = this->textBox7->Text;

		System::String^ bottomLeft = this->textBox4->Text;
		System::String^ bottomLeft_y = this->textBox8->Text;

		int numTR = Convert::ToInt32(topRight);
		int numTRy = Convert::ToInt32(topRight_y);

		int numTL = Convert::ToInt32(topLeft);
		int numTLy = Convert::ToInt32(topLeft_y);

		int numBR = Convert::ToInt32(bottomRight);
		int numBRy = Convert::ToInt32(bottomRight_y);

		int numBL = Convert::ToInt32(bottomLeft);
		int numBLy = Convert::ToInt32(bottomLeft_y);

		// Loading the background image
		Mat img = imread("Resources/cards.png");
		//imshow("img", img);
		
		// Loading the overlay image
		Mat ov = imread("Resources/markerImage.png");

		// Overlay the images at the specified point
		for (int row = 0; row < ov.rows; ++row) {
			for (int col = 0; col < ov.cols; ++col) {
				// Check if the overlay pixel is within the background bounds
				if (numTR + col < img.cols && numTRy + row < img.rows) {
					img.at<cv::Vec3b>(numTRy + row, numTR + col) = ov.at<cv::Vec3b>(row, col);
				}
			}
		}
		
		for (int row = 0; row < ov.rows; ++row) {
			for (int col = 0; col < ov.cols; ++col) {
				// Check if the overlay pixel is within the background bounds
				if (numTL + col < img.cols && numTLy + row < img.rows) {
					img.at<cv::Vec3b>(numTLy + row, numTL + col) = ov.at<cv::Vec3b>(row, col);
				}
			}
		}

		for (int row = 0; row < ov.rows; ++row) {
			for (int col = 0; col < ov.cols; ++col) {
				// Check if the overlay pixel is within the background bounds
				if (numBR + col < img.cols && numBRy + row < img.rows) {
					img.at<cv::Vec3b>(numBRy + row, numBR + col) = ov.at<cv::Vec3b>(row, col);
				}
			}
		}

		for (int row = 0; row < ov.rows; ++row) {
			for (int col = 0; col < ov.cols; ++col) {
				// Check if the overlay pixel is within the background bounds
				if (numBL + col < img.cols && numBLy + row < img.rows) {
					img.at<cv::Vec3b>(numBLy + row, numBL + col) = ov.at<cv::Vec3b>(row, col);
				}
			}
		}

		std::vector<int> markerIds;
		std::vector<std::vector<Point2f>> markerCorners, rejectedCandidates;
		DetectorParameters detectorParams;
		Dictionary dictionary = getPredefinedDictionary(DICT_6X6_250);
		ArucoDetector detector(dictionary, detectorParams);
		detector.detectMarkers(img, markerCorners, markerIds, rejectedCandidates);

		Mat outImg = img.clone();
		drawDetectedMarkers(outImg, markerCorners, markerIds);


		// Save the result
		//cv::imwrite("bg_with_overlay.png", img);
		imshow("overlay", outImg);

		waitKey(0);
	}
private: System::Void resetBtn_Click(System::Object^ sender, System::EventArgs^ e) {

	int numTR =0;
	int numTRy = 0;

	int numTL = 0;
	int numTLy = 0;

	int numBR = 0;
	int numBRy = 0;

	int numBL = 0;
	int numBLy = 0;

	// Loading the background image
	Mat img = imread("Resources/cards.png");
	//imshow("img", img);

	// Loading the overlay image
	Mat ov = imread("Resources/markerImage.png");

	// Overlay the images at the specified point
	for (int row = 0; row < ov.rows; ++row) {
		for (int col = 0; col < ov.cols; ++col) {
			// Check if the overlay pixel is within the background bounds
			if (numTR + col < img.cols && numTRy + row < img.rows) {
				img.at<cv::Vec3b>(numTRy + row, numTR + col) = ov.at<cv::Vec3b>(row, col);
			}
		}
	}

	for (int row = 0; row < ov.rows; ++row) {
		for (int col = 0; col < ov.cols; ++col) {
			// Check if the overlay pixel is within the background bounds
			if (numTL + col < img.cols && numTLy + row < img.rows) {
				img.at<cv::Vec3b>(numTLy + row, numTL + col) = ov.at<cv::Vec3b>(row, col);
			}
		}
	}

	for (int row = 0; row < ov.rows; ++row) {
		for (int col = 0; col < ov.cols; ++col) {
			// Check if the overlay pixel is within the background bounds
			if (numBR + col < img.cols && numBRy + row < img.rows) {
				img.at<cv::Vec3b>(numBRy + row, numBR + col) = ov.at<cv::Vec3b>(row, col);
			}
		}
	}

	for (int row = 0; row < ov.rows; ++row) {
		for (int col = 0; col < ov.cols; ++col) {
			// Check if the overlay pixel is within the background bounds
			if (numBL + col < img.cols && numBLy + row < img.rows) {
				img.at<cv::Vec3b>(numBLy + row, numBL + col) = ov.at<cv::Vec3b>(row, col);
			}
		}
	}

	std::vector<int> markerIds;
	std::vector<std::vector<Point2f>> markerCorners, rejectedCandidates;
	DetectorParameters detectorParams;
	Dictionary dictionary = getPredefinedDictionary(DICT_6X6_250);
	ArucoDetector detector(dictionary, detectorParams);
	detector.detectMarkers(img, markerCorners, markerIds, rejectedCandidates);

	Mat outImg = img.clone();
	drawDetectedMarkers(outImg, markerCorners, markerIds);


	// Save the result
	//cv::imwrite("bg_with_overlay.png", img);
	imshow("overlay", outImg);

	waitKey(0);
}
private: System::Void saveBtn_Click(System::Object^ sender, System::EventArgs^ e) {

	System::String^ filename = "config.txt";
	StreamWriter^ sw = gcnew StreamWriter(filename);
	
	System::String^ topRight = this->textBox1->Text;
	sw->WriteLine("TR" + topRight);

	System::String^ topRight_y = this->textBox5->Text;
	sw->WriteLine("TR_y" + topRight_y);

	System::String^ topLeft = this->textBox2->Text;
	sw->WriteLine("TL" + topLeft);

	System::String^ topLeft_y = this->textBox6->Text;
	sw->WriteLine("TL_y" + topLeft_y);

	System::String^ bottomRight = this->textBox3->Text;
	sw->WriteLine("BR" + bottomRight);

	System::String^ bottomRight_y = this->textBox7->Text;
	sw->WriteLine("BR_y" + bottomRight_y);

	System::String^ bottomLeft = this->textBox4->Text;
	sw->WriteLine("BL" + bottomLeft);

	System::String^ bottomLeft_y = this->textBox8->Text;
	sw->WriteLine("BL_y" + bottomLeft_y);
	sw->Close();
	Console::WriteLine("a new file ('{0}') has been written", filename);
}
};
}
