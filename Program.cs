using System;
using System.Collections.Generic;

class Student
{
    public string Name;
    public string Surname;
    public int Score;
}

class Program
{
    static List<Student> students = new List<Student>();

    static void Main()
    {
        while (true)
        {
            Console.WriteLine("\n--- IMTANAN NETICELERI SISTEMI ---");
            Console.WriteLine("1. Tələbə əlavə et");
            Console.WriteLine("2. Nəticələri göstər");
            Console.WriteLine("3. Orta balı göstər");
            Console.WriteLine("4. Çıxış");
            Console.Write("Seçim: ");

            string choice = Console.ReadLine();

            if (choice == "1")
                AddStudent();
            else if (choice == "2")
                ShowStudents();
            else if (choice == "3")
                ShowAverage();
            else if (choice == "4")
                break;
            else
                Console.WriteLine("Yanlış seçim!");
        }
    }

    static void AddStudent()
    {
        Student s = new Student();

        Console.Write("Ad: ");
        s.Name = Console.ReadLine();

        Console.Write("Soyad: ");
        s.Surname = Console.ReadLine();

        Console.Write("Qiymət: ");
        s.Score = Convert.ToInt32(Console.ReadLine());

        students.Add(s);

        Console.WriteLine("Tələbə əlavə olundu!");
    }

    static void ShowStudents()
    {
        Console.WriteLine("\n--- NƏTİCƏLƏR ---");

        if (students.Count == 0)
        {
            Console.WriteLine("Heç tələbə yoxdur.");
            return;
        }

        foreach (var s in students)
        {
            Console.WriteLine($"{s.Name} {s.Surname} - {s.Score}");
        }
    }

    static void ShowAverage()
    {
        Console.WriteLine("\n--- ORTA BAL ---");

        if (students.Count == 0)
        {
            Console.WriteLine("Heç tələbə yoxdur.");
            return;
        }

        int sum = 0;

        foreach (var s in students)
        {
            sum += s.Score;
        }

        double average = (double)sum / students.Count;

        Console.WriteLine("Orta bal: " + average);
    }
}