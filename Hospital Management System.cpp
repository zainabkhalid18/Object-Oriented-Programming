#include<iostream>
#include<conio.h>
using namespace std;

// Global variables for patient information
string patient_name;
string disease;
string address;
int age;

// Base class representing the Hospital system
class Hospital {
    // Private member variables for storing patient and appointment details
    string patient_name;
    string disease;
    string address;
    string date;
    double number;

public:
    void patient_appoint(); // Books a patient appointment by collecting details
    void doctor_list();     // Displays the list of available doctors
    void payment();         // Handles payment processing for treatment
};

// Doctor class inherits from Hospital
// Each method represents booking an appointment with a specific doctor
class Doctor : public Hospital {
public:
    void doctor_one();
    void doctor_two();
    void doctor_three();
    void doctor_four();
    void doctor_five();
    void doctor_six();
    void doctor_seven();
    void doctor_eight();
    void doctor_nine();
    void doctor_ten();
};

// Each doctor_* function collects appointment info and confirms booking
// They all call patient_appoint() since the process is the same for every doctor

void Doctor::doctor_one() {
    patient_appoint();
    cout << endl;
    cout << "\t YOUR APPOINTMENT IS FIXED. THANKYOU!" << endl;
}

void Doctor::doctor_two() {
    patient_appoint();
    cout << endl;
    cout << "\t YOUR APPOINTMENT IS FIXED. THANKYOU!" << endl;
}

void Doctor::doctor_three() {
    patient_appoint();
    cout << endl;
    cout << "\t YOUR APPOINTMENT IS FIXED. THANKYOU!" << endl;
}

void Doctor::doctor_four() {
    patient_appoint();
    cout << endl;
    cout << "\t YOUR APPOINTMENT IS FIXED. THANKYOU!" << endl;
}

void Doctor::doctor_five() {
    patient_appoint();
    cout << endl;
    cout << "\t YOUR APPOINTMENT IS FIXED. THANKYOU!" << endl;
}

void Doctor::doctor_six() {
    patient_appoint();
    cout << endl;
    cout << "\t YOUR APPOINTMENT IS FIXED. THANKYOU!" << endl;
}

void Doctor::doctor_seven() {
    patient_appoint();
    cout << endl;
    cout << "\t YOUR APPOINTMENT IS FIXED. THANKYOU!" << endl;
}

void Doctor::doctor_eight() {
    patient_appoint();
    cout << endl;
    cout << "\t YOUR APPOINTMENT IS FIXED. THANKYOU!" << endl;
}

void Doctor::doctor_nine() {
    patient_appoint();
    cout << endl;
    cout << "\t YOUR APPOINTMENT IS FIXED. THANKYOU!" << endl;
}

void Doctor::doctor_ten() {
    patient_appoint();
    cout << endl;
    cout << "\t YOUR APPOINTMENT IS FIXED. THANKYOU!" << endl;
}

// Collects all necessary patient information for booking an appointment
// Uses cin.ignore() before getline() to flush leftover newline from buffer
void Hospital::patient_appoint() {
    cout << "Enter the name of the patient:";
    cin.ignore();
    getline(cin, patient_name);

    cout << "Enter the age of the patient:";
    cin >> age;

    cout << "Enter the problem the patient is having:";
    cin.ignore();
    getline(cin, disease);

    cout << "Enter your address:";
    cin.ignore();
    getline(cin, address);

    cout << "Enter your contact number:";
    cin >> number;

    cout << "Enter the appointment date:";
    cin.ignore();
    getline(cin, date);

    cout << "Appointment booked successfully" << endl;
}

// Displays a formatted list of all doctors along with their specializations
void Hospital::doctor_list() {
    cout << "The Hospital is considered as the city's best hospital.\nOur hospital is largely staffed by professional physicians,surgeons and nurses" << endl;
    cout << "Our noble , hardworking and specialized doctors are:" << endl;
    cout << "\t\t1. Dr.Sana Gul\t\tEye Specialist" << endl;
    cout << "\t\t2. Dr. Muhammad Rehman\tCardiac Surgeon" << endl;
    cout << "\t\t3. Dr.Muhammad Nouman \tDiabetologist" << endl;
    cout << "\t\t4. Dr.Talat Naheed\tLung Specialist" << endl;
    cout << "\t\t5. Dr.Ghazala\t\tGynecologist" << endl;
    cout << "\t\t6. Dr.Khurshid Anwar\tHead and Neck surgeon" << endl;
    cout << "\t\t7. Dr.Sonia Ahmed\tGeneral Physician" << endl;
    cout << "\t\t8. Dr.Anita Haroon\tNephrologist" << endl;
    cout << "\t\t9. Dr.Anam Najam\tPsychiatrist" << endl;
    cout << "\t\t10. Dr.Aiman Omar\tDermatologist" << endl;
}

// Handles payment: takes amount and mobile number, then prints a payment summary
void Hospital::payment() {
    long amount;
    long long mobile_number;

    cout << "patient name:" << patient_name << endl;
    cout << "Enter the amount:";
    cin >> amount;
    cout << "Enter your mobile number:" << endl;
    cin >> mobile_number;
    cout << "--------------------------------------------" << endl;

    // Display payment receipt
    cout << "\tPatient Name:" << patient_name << endl;
    cout << "\tPatient disease:" << disease << endl;
    cout << "\tPatient amount:" << amount << endl;
    cout << "\tPatient contact number:" << mobile_number << endl;
    cout << "\tPayment Successfull! Thankyou" << endl;
}

int main() {
    int choice1, choice2; // choice1: main menu, choice2: doctor selection
    char choice3;         // Used to ask if user wants to continue
    Hospital hospital;
    Doctor doctor;

    do {
        system("cls"); // Clear screen before showing menu

        // Display main menu options
        cout << "Hospital Management System" << endl;
        cout << "1. Emergency Appointment Booking" << endl;
        cout << "2. Payment" << endl;
        cout << "3. Doctor List and Appontment" << endl;
        cout << "4. Exit" << endl;
        cout << "Select an option" << endl;
        cin >> choice1;

        switch (choice1) {
            case 1: // Direct appointment booking without selecting a doctor
                cout << " Patient Appointment" << endl;
                hospital.patient_appoint();
                break;

            case 2: // Process payment for a patient
                cout << " Treatment Payment" << endl;
                hospital.payment();
                break;

            case 3: // Show doctor list then let user pick one for appointment
                cout << " Doctors List" << endl;
                hospital.doctor_list();

                cout << "kindly select a doctor you want to have appointment with" << endl;
                cin >> choice2;

                // Route to the corresponding doctor's appointment function
                switch (choice2) {
                    case 1:  cout << "Dr.Sana Gull" << endl;           doctor.doctor_one();   break;
                    case 2:  cout << "Dr. Muhammad Rehman" << endl;    doctor.doctor_two();   break;
                    case 3:  cout << "Dr.Muhammad Nouman Anjum" << endl; doctor.doctor_three(); break;
                    case 4:  cout << "Dr.Talat Naheed" << endl;        doctor.doctor_four();  break;
                    case 5:  cout << "Dr.Ghazala" << endl;             doctor.doctor_five();  break;
                    case 6:  cout << "Dr.Khurshid Anwar" << endl;      doctor.doctor_six();   break;
                    case 7:  cout << "Dr.Sonia Ahmed" << endl;         doctor.doctor_seven(); break;
                    case 8:  cout << "Dr.Anita Haroon" << endl;        doctor.doctor_eight(); break;
                    case 9:  cout << "Dr. Anam Najam" << endl;         doctor.doctor_nine();  break;
                    case 10: cout << "Aiman Omar" << endl;             doctor.doctor_ten();   break;
                }
                break;

            case 4: // Exit the program
                exit(1);
        }

        // Ask user if they want to perform another operation
        cout << "Do yoo want to use the management system again? Y/N" << endl;
        cin >> choice3;

    } while (choice3 == 'y' || choice3 == 'Y'); // Repeat if user enters Y or y

    return 0;
}