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


    	void print()
    	{
    		switch (type)
    		{
    		case CHAR:
    			cout << "char: "<<data.c << endl;
    			break;
    		case INT:
    			cout << "int: "<<data.i << endl;
    			break;
    		case FLOAT:
    			cout << "float: "<<data.f << endl;
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
        DataType aa('e'), bb(16), cc(2.56F);
        aa.print();
        bb.print();
        cc.print();
}