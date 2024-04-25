

class Student{
    private:
        int age;
        string first_name;
        string last_name;
        int standard;
        int scores[5];
    public:
        void set_age(int _age){
            age=_age;
        }
        int get_age(){
            return age;
        }
        void set_first_name(string _first_name){
            first_name=_first_name;
        }
        string get_first_name(){
            return first_name;
        }
        void set_last_name(string _last_name){
            last_name=_last_name;
        }
        string get_last_name(){
            return last_name;
        }
        void set_standard(int _standard){
            standard=_standard;
        }
        int get_standard(){
            return standard;
        }
        string student_to_string(){
            int _age = age;
            int _standard = standard;
            string result = to_string(_age) +","+first_name+","+last_name+","+to_string(_standard);
            return result;
        }
        void input(){
            for(int i=0;i<5;i++){
                cin>>scores[i];
            }
        }
        int calculateTotalScore(){
            int sum = 0;
            for(int i=0;i<5;i++){
                sum+=scores[i];
            }
            return sum;
        }
};


