#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string input_filename = "output0.txt"; // �����ļ���
    std::string output_filename = "output1.txt"; // ����ļ���
    std::string line;
    int line_number = 1;

    // �������ļ�
    std::ifstream input_file(input_filename, std::ios::in);
    if (!input_file.is_open()) {
        std::cerr << "�޷��������ļ�: " << input_filename << std::endl;
        return 1;
    }

    // ��������ļ�
    std::ofstream output_file(output_filename, std::ios::out);
    if (!output_file.is_open()) {
        std::cerr << "�޷���������ļ�: " << output_filename << std::endl;
        input_file.close();
        return 1;
    }

    // ��ȡ������ÿһ��
    while (std::getline(input_file, line)) {
        output_file << line_number << ": " << line << std::endl;
        line_number++;
    }

    // �ر��ļ�
    input_file.close();
    output_file.close();
    return 0;
}