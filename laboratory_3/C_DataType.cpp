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
    	enum TYPE { INT, CHAR, FLOAT };//已知所处理类型只有3种可能，运用枚举类型
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
    	DataType c(265.12f);//265.12默认为double型，加f为float型
    	c.Show();
    	return 0;
    }