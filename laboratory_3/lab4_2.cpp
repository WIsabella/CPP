#include<iostream>

using namespace std;

enum CPU_Rank{P1=1,P2,P3,P4,P5,P6,P7};
enum RAM_Type{DDR4=1,DDR3,DDR2,DDR1};
enum CD_ROM_Type{SATA=1,USB};
enum CD_ROM_Installation{external=1,build_in};

class CPU
{
    public:

    CPU(CPU_Rank r,int f,float v)
    {
        rank=r;
        frequency=f;
        voltage=v;
        cout<<"struct a CPU!"<<endl;
    }

    ~CPU(){cout<<"delete a CPU!"<<endl;}

    CPU_Rank GetRank() const {return rank;}
    int GetFrequency() const {return frequency;}
    float GetVoltage(float v) {voltage=v;}
    
    void SetRank(CPU_Rank r){rank=r;}
    void SetFrequency(int f){frequency=f;}
    void SetVoltage(float v){voltage=v;}

    void Run(){cout<<"CPU is runing!"<<endl;}
    void Stop(){cout<<"CPU is stopped!"<<endl;}

    private:
    enum CPU_Rank rank;
    int frequency;
    float voltage;

}cpu(P6,300,2.8);

class RAM
{
    public:
    void Run(){cout<<"ram is running!"<<endl;}
    void Stop(){cout<<"ram is stopped!"<<endl;}

    RAM(float c,RAM_Type t,int f)
    {
        capacity=c;
        ram_type=t;
        ram_frequency=f;
        cout<<"struct a ram!"<<endl;
    }
    ~RAM(){cout<<"delete a ram!"<<endl;}


    private:

    float capacity;
    RAM_Type ram_type;
    int ram_frequency;

}ram(10,DDR4,50);

class CD_ROM
{
    public:
    void Run(){cout<<"cd-rom is running!"<<endl;}
    void Stop(){cout<<"cd-rom is stopped!"<<endl;}

    CD_ROM(float c,CD_ROM_Type t,CD_ROM_Installation i)
    {
        Cache_capacity=c;
        cd_rom_installation=i;
        cd_rom_type=t;
        cout<<"struct a cd_rom!"<<endl;
    }
    ~CD_ROM(){cout<<"delete a cd_rom!"<<endl;}
    private:
    CD_ROM_Type cd_rom_type;
    CD_ROM_Installation cd_rom_installation;
    float Cache_capacity;

}cd_rom(88,USB,build_in);


class COMPUTER
{
    public:
    COMPUTER(CPU New_cpu,RAM New_ram,CD_ROM New_rom):cpu(New_cpu),ram(New_ram),cd_rom(New_rom)
    {
        cpu=cpu;
        ram=ram;
        cd_rom=cd_rom;
    }
    void Run()
    {
        cout<<"computer is on!"<<endl;
        cpu.Run();
        ram.Run();
        cd_rom.Run();

    };
    void Stop()
    {
        cout<<"computer is stop!"<<endl;
        cpu.CPU::Stop();
        ram.RAM::Stop();
        cd_rom.CD_ROM::Stop();
    }

    private:
    CPU cpu;
    RAM ram;
    CD_ROM cd_rom;
};




int main()
{
    //CPU cpu(P6,300,2.8);
    //RAM ram(10,DDR4,50);
    //CD_ROM cd_rom(88,USB,build_in);
    COMPUTER computer(cpu,ram,cd_rom);
    computer.Run();
    computer.Stop();

}