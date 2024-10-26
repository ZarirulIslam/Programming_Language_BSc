package com.sifat;

public class Student extends Person {

    private String program;
    private int year;
    private double free;


    public Student(String name, String address, String program, int year, double free) {
        super(name, address);
        this.program = program;
        this.year = year;
        this.free = free;
    }

    public String getProgram() {
        return program;
    }

    public void setProgram(String program) {
        this.program = program;
    }

    public int getYear() {
        return this.year;
    }

    public void setYear(int year) {
        this.year = year;
    }

    public double getFree() {
        return this.free;
    }

    public void setFree(double free) {
        this.free = free;
    }

    public Student(String name, String address) {
        super(name, address);
    }

    @Override
    public String toString() {
        String name = super.toString();
        String address = super.toString();
        return  name + address + this.program + " " + this.year + " " + this.free;
    }
}
