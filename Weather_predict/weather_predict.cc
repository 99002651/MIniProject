#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include<vector>
#include<iterator>

class CsvRow { //row search
  public:
    std::string const& operator[](std::size_t index) const {
        return m_data[index];
    }
    std::size_t size() const {
        return m_data.size();
    }
    void readNextRow(std::istream& str) {
        std::string line;
        std::getline(str,line);
        std::stringstream lineStream(line);
        std::string cell;

        m_data.clear();
        while(std::getline(lineStream,cell,',')) {
            m_data.push_back(cell);
        }
        if(!lineStream && cell.empty()) {
            m_data.push_back("");
        }
    }
  private:
    std::vector<std::string> m_data;
};
std::istream& operator>>(std::istream& str,CsvRow& data) {
    data.readNextRow(str);
    return str;
}
int main() {
    std::ifstream file1("data.csv");
    CsvRow row;
    int n;
    std::cout<<"Enter 1 search with STATE AND DISTRICT:: "<<"\n";

    std::cin>>n;
    if(n==1) {
        std::string state,district,Month;
        std::cout<<"Enter the state,District and Month"<<"\n";
          std::cin>>state;
          std::cin>>district;
          std::cin>>Month;
        while(file1>>row) {
            if((row[0]==state)&& (row[1]==district) &&(row[2] == Month)) {
                    std::cin>>n;
                    if(n==2){
                        std::cout<<"[ STATE:"<<row[0]<<" - "<<"DISTRICT:"<<row[1]<<" - "<<"MONTH :"<<row[2] << "\n";
                    }
                    else if(n==3){
                        std::cout<<"[ STATE:"<<row[2]<<" - "<<"DISTRICT:"<<row[1]<<" - "<<"MONTH :"<<row[3] << "\n";
                    }
                    else if(n==4){
                        std::cout<<"[ STATE:"<<row[2]<<" - "<<"DISTRICT:"<<row[1]<<" - "<<"MONTH :"<<row[3] << "\n";
                    }
                    else{ std::cout<<"Invalid"<<"\n";}
                    }
            }
        }
    else {
        std::cout<<"sorry!wrong"<<std::endl;
    }
    return 0;
}
