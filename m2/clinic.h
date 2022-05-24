
/*
*****************************************************************************
                        Assignment 1 - Milestone 2
Full Name  : Smit Anjaykumar Patel
Student ID#: 104424213
Email      : sapatel59@myseneca.ca
Section    : IPC144NMM.10348.2221
Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*****************************************************************************
*/



// SAFE-GUARD: 
// It is good practice to apply safe-guards to header files
// Safe-guard's ensures only 1 copy of the header file is used in the project build
// The macro name should be mirroring the file name with _ for spaces, dots, etc.
#ifndef CLINIC_H
#define CLINIC_H


//////////////////////////////////////
// Module macro's (usable by any file that includes this header)
//////////////////////////////////////

// Display formatting options (Provided to student)
// !!! DO NOT MODIFY THESE MACRO'S !!!
#define FMT_FORM 1
#define FMT_tables_fmt 2

// C Strings: array sizes
#define NAME_LEN 15
#define PHONE_DESC_LEN 4
#define PHONE_LEN 10


//////////////////////////////////////
// Structures
//////////////////////////////////////

// Data type: Phone
// ToDo:
struct Phone_p{
    char description[PHONE_DESC_LEN+1];
    char number[PHONE_LEN+1];


} ;

// Data type: Patient 
// ToDo:
struct Patients pet{
    int patient_Number;
    
    struct Phone_p Phone_p;

    char Name_n[NAME_LEN + 1];
};


// ClinicData type: Provided to student
// !!! DO NOT MODIFY THIS DATA TYPE !!!
struct ClinicData
{
    struct Patients pet* Patients_p;
    int max_Patient;
};



//////////////////////////////////////
// DISPLAY FUNCTIONS
//////////////////////////////////////

// Display's the patient table header (table format)
void displayPatientTableHeader(void);

// Displays a single patient record in FMT_FORM | FMT_TABLE format
void displayPatientData(const struct Patients pet* Patients, int FMT);


//////////////////////////////////////
// MENU & ITEM SELECTION FUNCTIONS
//////////////////////////////////////

// Menu: Main
void menuMain(struct ClinicData* DATA_data);

// Menu: Patient Management
void menuPatient(struct Patients pet Patients[], int Maximum);

// Menu: Patient edit
void menuPatientEdit(struct Patients pet* Patients);


// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// !!! ALL the below functions need defining       !!!
// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

// !!! DO NOT MODIFY THE BELOW PROTOTYPES !!!

// Display's all patient data in the FMT_FORM | FMT_TABLE format
void displayAllPatients(const struct Patients pet Patients[], int Maximum, int FMT);

// Search for a patient record based on patient number or phone number
void searchPatientData(const struct Patients pet Patients[], int Maximum);

// Add a new patient record to the patient array
void addPatient(struct Patients pet Patients[], int Maximum);

// Edit a patient record from the patient array
void editPatient(struct Patients pet Patients[], int Maximum);

// Remove a patient record from the patient array
void removePatient(struct Patients pet Patients[], int Maximum);


//////////////////////////////////////
// UTILITY FUNCTIONS
//////////////////////////////////////

// Search and display patient record by patient number (form)
void searchPatientByPatientNumber(const struct Patients pet Patients[], int Maximum);

// Search and display patient records by phone number (tabular)
void searchPatientByPhoneNumber(const struct Patients pet Patients[], int Maximum);

// Get the next highest patient number
int nextPatientNumber(const struct Patients pet Patients[], int Maximum);

// Find the patient array index by patient number (returns -1 if not found)
int findPatientIndexByPatientNum(int Patient_Number,
                                 const struct Patients pet Patients[], int Maximum);


//////////////////////////////////////
// USER INPUT FUNCTIONS
//////////////////////////////////////

// Get user input for a new patient record
void inputPatient(struct Patients pet* Patients);

// Get user input for phone contact information
void inputPhoneData(struct Phone_p* Phone_p);


#endif // !CLINIC_H