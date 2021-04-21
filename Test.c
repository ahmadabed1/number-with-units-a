#include "doctest.h"
#include <string>
#include "NumberWithUnits.hpp"

using namespace std;
using namespace doctest;
using namespace ariel;

const std::string test_file = "./units.txt";

TEST_CASE("OPERTOR +"){
    ifstream units_file{test_file};
    NumberWithUnits::read_units(units_file);
    CHECK((NumberWithUnits(9,"m")+NumberWithUnits(50,"cm"))==NumberWithUnits(3.4,"m"));
    CHECK((NumberWithUnits(6,"kg")+NumberWithUnits(6,"g"))==NumberWithUnits(1.006,"kg"));
    CHECK((NumberWithUnits(5,"g")+NumberWithUnits(5,"kg"))==NumberWithUnits(5005,"g"));
    CHECK((NumberWithUnits(5,"g")+NumberWithUnits(5,"t"))==NumberWithUnits(5000005,"g"));
    CHECK((NumberWithUnits(9,"t")+NumberWithUnits(8,"g"))==NumberWithUnits(9.000008,"t"));
    CHECK_THROWS_MESSAGE(NumberWithUnits(3,"m")+NumberWithUnits(5,"s")," not from the same system");
    CHECK_THROWS_MESSAGE(NumberWithUnits(5,"s")+NumberWithUnits(3,"m")," not from the same system");
}


TEST_CASE("OPERTOR +="){
    ifstream units_file{test_file};
    NumberWithUnits::read_units(units_file);
    CHECK((NumberWithUnits(3,"m")+=NumberWithUnits(40,"cm"))==NumberWithUnits(3.4,"m"));
    CHECK((NumberWithUnits(1,"kg")+=NumberWithUnits(1,"g"))==NumberWithUnits(1.001,"kg"));
    CHECK((NumberWithUnits(1,"g")+=NumberWithUnits(1,"kg"))==NumberWithUnits(1001,"g"));
    CHECK((NumberWithUnits(1,"g")+=NumberWithUnits(1,"ton"))==NumberWithUnits(1000001,"g"));
    CHECK((NumberWithUnits(2,"ton")+=NumberWithUnits(3,"g"))==NumberWithUnits(2.000003,"ton"));
    CHECK_THROWS_MESSAGE(NumberWithUnits(3,"m")+=NumberWithUnits(5,"sec"),"Types not from the same system");
    CHECK_THROWS_MESSAGE(NumberWithUnits(5,"sec")+=NumberWithUnits(3,"m"),"Types not from the same system");

}

TEST_CASE("OPERTOR -"){
    ifstream units_file{test_file};
    NumberWithUnits::read_units(units_file);
    CHECK((NumberWithUnits(3,"m")-NumberWithUnits(40,"cm"))==NumberWithUnits(2.6,"m"));
    CHECK((NumberWithUnits(1,"kg")-NumberWithUnits(1,"g"))==NumberWithUnits(0.999,"kg"));
    CHECK((NumberWithUnits(1,"g")-NumberWithUnits(1,"kg"))==NumberWithUnits(-999,"g"));
    CHECK((NumberWithUnits(1,"g")-NumberWithUnits(1,"ton"))==NumberWithUnits(-1999999,"g"));
    CHECK((NumberWithUnits(2,"ton")-NumberWithUnits(3,"g"))==NumberWithUnits(1.999997,"ton"));
    CHECK_THROWS_MESSAGE(NumberWithUnits(3,"m")-NumberWithUnits(5,"sec"),"Types not from the same system");
    CHECK_THROWS_MESSAGE(NumberWithUnits(5,"sec")-NumberWithUnits(3,"m"),"Types not from the same system");

}

TEST_CASE("OPERTOR -="){
    ifstream units_file{test_file};
    NumberWithUnits::read_units(units_file);
    CHECK((NumberWithUnits(3,"m")-=NumberWithUnits(40,"cm"))==NumberWithUnits(2.6,"m"));
    CHECK((NumberWithUnits(1,"kg")-=NumberWithUnits(1,"g"))==NumberWithUnits(0.999,"kg"));
    CHECK((NumberWithUnits(1,"g")-=NumberWithUnits(1,"kg"))==NumberWithUnits(-999,"g"));
    CHECK((NumberWithUnits(1,"g")-NumberWithUnits(1,"ton"))==NumberWithUnits(-1999999,"g"));
    CHECK((NumberWithUnits(2,"ton")-=NumberWithUnits(3,"g"))==NumberWithUnits(1.999997,"ton"));
    CHECK_THROWS_MESSAGE(NumberWithUnits(3,"m")-=NumberWithUnits(5,"sec"),"Types not from the same system");
    CHECK_THROWS_MESSAGE(NumberWithUnits(5,"sec")-=NumberWithUnits(3,"m"),"Types not from the same system");
}


TEST_CASE("OPERTOR >"){
    ifstream units_file{test_file};
    NumberWithUnits::read_units(units_file);
}

TEST_CASE("OPERTOR >="){
    ifstream units_file{test_file};
    NumberWithUnits::read_units(units_file);
}

TEST_CASE("OPERTOR <"){
    ifstream units_file{test_file};
    NumberWithUnits::read_units(units_file);
}

TEST_CASE("OPERTOR <="){
    ifstream units_file{test_file};
    NumberWithUnits::read_units(units_file);
}

TEST_CASE("OPERTOR =="){
    ifstream units_file{test_file};
    NumberWithUnits::read_units(units_file);
}

TEST_CASE("OPERTOR !="){
    ifstream units_file{test_file};
    NumberWithUnits::read_units(units_file);
}



TEST_CASE("OPERTOR ++x"){
    ifstream units_file{test_file};
    NumberWithUnits::read_units(units_file);
}

TEST_CASE("OPERTOR x++"){
    ifstream units_file{test_file};
    NumberWithUnits::read_units(units_file);
}

TEST_CASE("OPERTOR --x"){
    ifstream units_file{test_file};
    NumberWithUnits::read_units(units_file);
}

TEST_CASE("OPERTOR x--"){
    ifstream units_file{test_file};
    NumberWithUnits::read_units(units_file);
}

TEST_CASE("OPERTOR <<"){
    ifstream units_file{test_file};
    NumberWithUnits::read_units(units_file);
}

TEST_CASE("OPERTOR >>"){
    ifstream units_file{test_file};
    NumberWithUnits::read_units(units_file);
}