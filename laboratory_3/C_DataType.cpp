  #include <iostream>
    using namespace std;
    class DataType
    {
    public:
    	DataType(int i)
    	{
    		data.i = i;
    		type = INT;
    	}
    	DataType(char c)
    	{
    		data.c= c;
    		type = CHAR;
    	}
    	DataType(float f)
    	{
    		data.f = f;
    		type = FLOAT;
    	}
    	void Show()
    	{
    		switch (type)
    		{
    		case CHAR:
    			cout << data.c << endl;
    			break;
    		case INT:
    			cout << data.i << endl;
    			break;
    		case FLOAT:
    			cout << data.f << endl;
    			break;
    		default:
    			break;
           
    
    
    		}
    	}
    private:
    	enum TYPE { INT, CHAR, FLOAT };//��֪����������ֻ��3�ֿ��ܣ�����ö������
    	union DATA 
    	{
    		int i;
    		char c;
    		float f;
    	};
    	TYPE type;
    	DATA data;
    };
    int main()
    {
    	DataType a('c');
    	a.Show();
    	DataType b(960);
    	b.Show();
    	DataType c(265.12f);//265.12Ĭ��Ϊdouble�ͣ���fΪfloat��
    	c.Show();
    	return 0;
    }