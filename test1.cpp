#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string input_filename = "output0.txt";  // ������ı��ļ���
    std::string output_filename = "output.bin";  // ����Ķ������ļ���
    std::string line;
    int line_number = 1;

    // �������ļ�
    std::ifstream input_file(input_filename, std::ios::in);
    if (!input_file.is_open()) {
        std::cerr << "�޷��������ļ�: " << input_filename << std::endl;
        return 1;
    }

    // ��������ļ�
    std::ofstream output_file(output_filename, std::ios::binary);
    if (!output_file.is_open()) {
        std::cerr << "�޷���������ļ�: " << output_filename << std::endl;
        input_file.close();
        return 1;
    }

    // ��ȡ������ÿһ��
    while (std::getline(input_file, line)) {
        // ���к�ת��Ϊ�ַ�������ӵ�����
        std::string numbered_line = std::to_string(line_number) + ": " + line + "\n";
        // �Զ�������ʽд�뵽����ļ�
        output_file.write(numbered_line.c_str(), numbered_line.size());
        line_number++;
    }

    // �ر��ļ�
    input_file.close();
    output_file.close();

    std::cout << "�ı��ļ���ÿһ��������кŲ�д�뵽�ļ� " << output_filename << " �С�" << std::endl;
    return 0;
}
