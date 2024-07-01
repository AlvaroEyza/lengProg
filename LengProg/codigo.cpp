#include <iostream>
#include <vector>
#include <ctime>

#include <math.h>
using namespace std;

class Profesor {
private:
    string nombre;
    bool disponibilidad[10][5];
    vector<string> cursos;

public:
        Profesor(string nombre, bool listo[10][5], vector<string> cursos)
        : nombre(nombre), cursos(cursos) {
        for (int i = 0; i < 10; ++i) {
            for (int j = 0; j < 5; ++j) {
                disponibilidad[i][j] = listo[i][j];
            }
        }
    }

    Profesor(const Profesor& other)
        : nombre(other.nombre), cursos(other.cursos) {
        for (int i = 0; i < 10; ++i) {
            for (int j = 0; j < 5; ++j) {
                disponibilidad[i][j] = other.disponibilidad[i][j];
            }
        }
    }

    Profesor& operator=(const Profesor& other) {
        if (this != &other) {
            nombre = other.nombre;
            cursos = other.cursos;
            for (int i = 0; i < 10; ++i) {
                for (int j = 0; j < 5; ++j) {
                    disponibilidad[i][j] = other.disponibilidad[i][j];
                }
            }
        }
        return *this;
    }

    Profesor() : nombre(""), cursos({}) {
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 5; j++) {
                disponibilidad[i][j] = false;
            }
        }
    }
    void setNombre(string nombre) {
        this->nombre = nombre;
    }
    void setCursos(vector<string> cursos) {
        this->cursos = cursos;
    }
    void setDisponibilidad(bool listo, int dia, int hora) {
        disponibilidad[dia][hora] = listo;
    }

    void setDisponibilidad2(bool listo, int dia, int hora) {
        disponibilidad[dia][hora] = listo;
    }
    string getNombre() {
        return nombre;
    }
    vector<string> getCursos() {
        return cursos;
    }
    bool getDisponibilidad(int dia, int hora) {
        return disponibilidad[dia][hora];
    }

    void ImprimirDisponibilidad() {
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 5; j++) {
                cout << disponibilidad[i][j] << " ";
            }
            cout << endl;
        }
    }
};

class Aula {
private:
    int capacidad;
    string tipo;
    string caracteristica;
    bool disponibilidad[10][5];
public:
    Aula(int capacidad, string tipo, bool listo[10][5], string caracteristica)
        : capacidad(capacidad), tipo(tipo), caracteristica(caracteristica){
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 5; j++) {
                disponibilidad[i][j] = listo[i][j];
            }
        }
    }

    Aula(const Aula& other) : capacidad(other.capacidad), tipo(other.tipo), caracteristica(other.caracteristica) {
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 5; j++) {
                disponibilidad[i][j] = other.disponibilidad[i][j];
            }
        }
    }
    // Operador de asignaci�n
    Aula& operator=(const Aula& other) {
        if (this != &other) {
            capacidad = other.capacidad;
            tipo = other.tipo;
            caracteristica = other.caracteristica;
            for (int i = 0; i < 10; i++) {
                for (int j = 0; j < 5; j++) {
                    disponibilidad[i][j] = other.disponibilidad[i][j];
                }
            }
        }
        return *this;
    }

    Aula() : capacidad(0), tipo("") {
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 5; j++) {
                disponibilidad[i][j] = false;
            }
        }
    }
    void setCaracteristica(string caracteristica) {
        this->caracteristica = caracteristica;
    }
    string getCaracteristica() {
        return caracteristica;
    }
    void setCapacidad(int capacidad) {
        this->capacidad = capacidad;
    }
    void setTipo(string tipo) {
        this->tipo = tipo;
    }
    void setDisponibilidad(bool listo ,int dia, int hora) {
        disponibilidad[dia][hora] = listo;
    }
    int getCapacidad() {
        return capacidad;
    }
    string getTipo() {
        return tipo;
    }
    bool getDisponibilidad(int dia, int hora) {
        return disponibilidad[dia][hora];
    }

    void ImprimirDisponibilidad() {
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 5; j++) {
                cout << disponibilidad[i][j] << " ";
            }
            cout << endl;
        }
    }

};

class Curso {
private:
    string nombre;
    bool disponibilidad[10][5];
    string requerimiento;
public:
    Curso(string nombre, bool listo[10][5], string requerimiento)
        : nombre(nombre) , requerimiento(requerimiento){
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 5; j++) {
                disponibilidad[i][j] = listo[i][j];
            }
        }
    }

    Curso(const Curso& other) : nombre(other.nombre), requerimiento(other.requerimiento) {
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 5; j++) {
                disponibilidad[i][j] = other.disponibilidad[i][j];
            }
        }
    }
    // Operador de asignaci�n
    Curso& operator=(const Curso& other) {
        if (this != &other) {
            nombre = other.nombre;
            requerimiento = other.requerimiento;
            for (int i = 0; i < 10; i++) {
                for (int j = 0; j < 5; j++) {
                    disponibilidad[i][j] = other.disponibilidad[i][j];
                }
            }
        }
        return *this;
    }

    Curso() : nombre("") {
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 5; j++) {
                disponibilidad[i][j] = false;
            }
        }
    }


    void setRequerimiento(string requerimiento) {
        this->requerimiento = requerimiento;
    }
    string getRequerimiento() {
        return requerimiento;
    }
    void setNombre(string nombre) {
        this->nombre = nombre;
    }
    void setDisponibilidad(bool listo, int dia, int hora) {
        disponibilidad[dia][hora] = listo;
    }
    string getNombre() {
        return nombre;
    }
    bool getDisponibilidad(int dia, int hora) {
        return disponibilidad[dia][hora];
    }

};

class Clase {
private:
    int ID;
    Curso curso;
    Aula aula;
    Profesor profesor;
    int hora;
    int dia;
public:
    Clase(int ID, Curso curso, Aula aula, Profesor profesor, int hora, int dia)
        : ID(ID), curso(curso), aula(aula), profesor(profesor), hora(hora), dia(dia) {}

    Clase()
        : ID(-1), curso(), aula(), profesor(), hora(-1), dia(-1) {}

    void setID(int ID) {
        this->ID = ID;
    }
    void setCurso(Curso curso) {
        this->curso = curso;
    }
    void setAula(Aula aula) {
        this->aula = aula;
    }
    void setProfesor(Profesor profesor) {
        this->profesor = profesor;
    }
    void setHora(int hora) {
        this->hora = hora;
    }
    void setDia(int dia) {
        this->dia = dia;
    }
    int getID() {


        return ID;
    }
    Curso getCurso() {
        return curso;
    }
    Aula getAula() {
        return aula;
    }
    Profesor getProfesor() {
        return profesor;
    }
    int getHora() {
        return hora;
    }
    int getDia() {
        return dia;
    }

};

class Asignaciones {
private:
    Clase clases[10][5];
    string tipo;
public:
    Asignaciones(string tipo) : tipo(tipo) {
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 5; j++) {
                clases[i][j] = Clase();
            }
        }
    }
    Clase&  getClase(int i, int j) {
        return clases[i][j];
    }

    void setClase(int i, int j, Clase clase) {
        clases[i][j] = clase;
    }

    void ImprimirAsignaciones() {
            for (int i = 0; i < 5; i++) {
            cout << "Dia " << i + 1 << endl;
            for (int j = 0; j < 10; j++) {
                if (clases[j][i].getID() != -1){
                    cout << "Hora " << j + 1 << ": " << clases[j][i].getCurso().getNombre() << " - " << clases[j][i].getProfesor().getNombre() << " - " << clases[j][i].getAula().getTipo() << endl;
                } else {
                    cout << "Hora " << j + 1 << ": Libre" << endl;
                }
            }
            cout << endl;
        }
    }

    string getTipo() {
        return tipo;
    }

    void setTipo(string tipo) {
        this->tipo = tipo;
    }

    void EliminarAsignacion(int i, int j) {
        clases[i][j] = Clase();
    }



};

class Horario {

private:
    vector<Asignaciones> asignaciones;
    int estados[10][5];
    vector<Profesor> profesores;
    vector<Aula> aulas;
    vector<Curso> cursos;
    int brillo = 0;
    int CursosIngresados = 0;
    int ProfesoresIngresados = 0;


public:


   Horario(vector<Profesor> profesores, vector<Aula> aulas, vector<Curso> cursos)
    : brillo(0) , ProfesoresIngresados(profesores.size()), CursosIngresados(cursos.size()){
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 5; ++j) {
            estados[i][j] = 0;
        }
    }

    for (const auto& profesor : profesores) {
        this->profesores.push_back(Profesor(profesor));
    }
    for (const auto& aula : aulas) {
        this->aulas.push_back(Aula(aula));
    }
    for (const auto& curso : cursos) {
        this->cursos.push_back(Curso(curso));
    }


    for (int i = 0; i < aulas.size(); i++) {
        asignaciones.push_back(Asignaciones(aulas[i].getTipo()));
    }
}

    int getEstado(int i, int j) {
        return estados[i][j];
    }

    void setEstado(int i, int j, int estado) {
        estados[i][j] = estado;
    }

    vector<Asignaciones> getAsignaciones3() {
        return asignaciones;
    }


    int getBrillo() {
        return this->brillo;
    }

    void setBrillo(int brillo) {
        this->brillo = brillo;
    }

    void ImprimirEstados() {
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 5; j++) {
                cout << estados[i][j] << " ";
            }
            cout << endl;
        }
    }
        Asignaciones& getAsignacion(Aula aula) {
        for (int i = 0; i < asignaciones.size(); i++) {
            if (asignaciones[i].getTipo() == aula.getTipo()) {
                return asignaciones[i];
            }
        }
  
        static Asignaciones emptyAsignacion("");
        return emptyAsignacion;
    }

    Asignaciones&  getAsignacion2(int i) {
        return asignaciones[i];
    }

    vector<Profesor> getProfesores() {
        return profesores;
    }

    vector<Aula> getAulas() {
        return aulas;
    }

    vector<Curso> getCursos() {
        return cursos;
    }

    int getProfesoresIngresados() {
        return ProfesoresIngresados;
    }

    int getCursosIngresados() {
        return CursosIngresados;
    }















    vector<int> ObtenerHoraDiaAleatorioCon() {
        vector<int> dias;
        vector<int> horas;
        vector<int> resultado;

        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 5; j++) {
                if (estados[i][j] == 0) {
                    dias.push_back(i);
                    horas.push_back(j);
                }
            }
        }
        if(!dias.empty()){
            int random = rand() % dias.size();
            resultado.push_back(dias[random]);
            resultado.push_back(horas[random]);
        }
        return resultado;
    }

    vector<Curso> ObtenerCursosDisponibles(int dia, int hora) {
        vector<Curso> resultado;
        for (int i = 0; i < cursos.size(); i++) {
            if (cursos[i].getDisponibilidad(dia, hora) == true) {
                resultado.push_back(cursos[i]);
            }
        }
        return resultado;
    }

    vector<Profesor> ObtenerProfesoresCurso(Curso curso, int dia, int hora) {
        vector<Profesor> resultado;
        for (int i = 0; i < profesores.size(); i++) {
            for (int j = 0; j < profesores[i].getCursos().size(); j++) {
                if (profesores[i].getCursos()[j] == curso.getNombre() && profesores[i].getDisponibilidad(dia, hora) == true) {


                    resultado.push_back(profesores[i]);
                }
            }
        }
        return resultado;
    }

    vector<Aula> ObtenerAulasDisponibles(int dia, int hora, Curso curso) {
        vector<Aula> resultado;
        for (int i = 0; i < aulas.size(); i++) {
            if (aulas[i].getDisponibilidad(dia, hora) == true, aulas[i].getCaracteristica() == curso.getRequerimiento()){
                if(aulas[i].getDisponibilidad(dia, hora) != false) {



                resultado.push_back(aulas[i]);
                }
            }
        }
        return resultado;
    }


    Clase GenerarClase(int dia, int hora) {
        vector<Curso> cursosDisponibles = ObtenerCursosDisponibles(dia, hora);
        while(!cursosDisponibles.empty()) {
            int random1 = rand() % cursosDisponibles.size();
            Curso curso = cursosDisponibles[random1];
            vector<Profesor> profesoresDisponibles = ObtenerProfesoresCurso(curso, dia, hora);


            if (!profesoresDisponibles.empty()) {
                int random = rand() % profesoresDisponibles.size();
                Profesor profesor = profesoresDisponibles[random];

                vector<Aula> aulasDisponibles = ObtenerAulasDisponibles(dia, hora,curso);
                if (!aulasDisponibles.empty()) {
                    random = rand() % aulasDisponibles.size();
                    Aula aula = aulasDisponibles[random];

                    Clase clase = Clase(0, curso, aula, profesor, dia, hora);
                    return clase;
                } else {
                    cursosDisponibles.erase(cursosDisponibles.begin() + random1);
                }
            } else {
                cursosDisponibles.erase(cursosDisponibles.begin() + random1);
            }
        }
        return Clase();
    }

    bool VerificarQueHayClasesPosiblesEnUnDiaHora(int dia, int hora) {
        vector<Curso> cursosDisponibles = ObtenerCursosDisponibles(dia, hora);
        while(!cursosDisponibles.empty()) {
            int random1 = rand() % cursosDisponibles.size();
            Curso curso = cursosDisponibles[random1];
            vector<Profesor> profesoresDisponibles = ObtenerProfesoresCurso(curso, dia, hora);
            if (!profesoresDisponibles.empty()) {
                int random = rand() % profesoresDisponibles.size();
                Profesor profesor = profesoresDisponibles[random];
                vector<Aula> aulasDisponibles = ObtenerAulasDisponibles(dia, hora,curso);
                if (!aulasDisponibles.empty()) {
                    return true;
                } else {
                    cursosDisponibles.erase(cursosDisponibles.begin() + random1);
                }
            } else {
                cursosDisponibles.erase(cursosDisponibles.begin() + random1);
            }
        }
        return false;
    }

    bool revisarDisponibilidadProfesor(Profesor profesor) {
        for(int i = 0; i < 10; i++) {
            for(int j = 0; j < 5; j++) {
                if(profesor.getDisponibilidad(i,j) == true) {
                    return true;
                }
            }
        }
        return false;
    }
    bool VerificarEstados2() {
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 5; j++) {
                if (estados[i][j] == 2) {
                    return true;
                }
            }
        }
        return false;
    }



    void BorrarProfesor(Profesor profesor) {
        for(int i = 0; i < profesores.size(); i++) {
            if(profesores[i].getNombre() == profesor.getNombre()) {
                profesores.erase(profesores.begin() + i);
                break;
            }
        }
    }



    void ImprimirHorario() {
        cout << "Horario" << endl;
        for(int i = 0; i < asignaciones.size(); i++) {
            cout << asignaciones[i].getTipo() << endl;
            asignaciones[i].ImprimirAsignaciones();
        }
    }
    

        void GenerarHorario() {
        while (true) {
            vector<int> horaDia = ObtenerHoraDiaAleatorioCon();
         
            if (horaDia.size() == 0 || profesores.empty() || aulas.empty() || cursos.empty() ) {
                break;
            }
            Clase clase = GenerarClase(horaDia[0], horaDia[1]);
            if (clase.getID() != -1) {



                Profesor& profesor2 = profesores[GetProfesorIndex(clase.getProfesor().getNombre())];
                Aula& aula = aulas[GetAulaIndex(clase.getAula().getTipo())];
                Curso& curso = cursos[GetCursoIndex(clase.getCurso().getNombre())];

                Asignaciones& asignacion = getAsignacion(clase.getAula());
            if (asignacion.getTipo() != "") {
                asignacion.setClase(horaDia[0], horaDia[1], clase);
            }

                profesor2.setDisponibilidad(false, horaDia[0], horaDia[1]);
                if(!revisarDisponibilidadProfesor(profesor2)) {
                    BorrarProfesor(profesor2);
                }



                aula.setDisponibilidad(false, horaDia[0], horaDia[1]);


            } else {
                setEstado(horaDia[0], horaDia[1], 2);
               





            }
        }

        



    }

    int GetProfesorIndex(const string& nombre) {
        for (int i = 0; i < profesores.size(); i++) {
            if (profesores[i].getNombre() == nombre) {
                return i;
            }
        }
        return -1;
    }

    int GetAulaIndex(const string& tipo) {
        for (int i = 0; i < aulas.size(); i++) {
            if (aulas[i].getTipo() == tipo) {
                return i;
            }
        }
        return -1;
    }



    int GetCursoIndex(const string& nombre) {
        for (int i = 0; i < cursos.size(); i++) {
            if (cursos[i].getNombre() == nombre) {
                return i;
            }
        }
        return -1;
    }

void CalcularBrillo(Horario horario) {
    double TotalClases = 0;

            vector<double> TotalClasesPorAsignacion;
            for (int i = 0; i < asignaciones.size(); i++) {
                int total = 0;
                for (int j = 0; j < 5; j++) {
                    for (int k = 0; k < 10; k++) {
                        if (asignaciones[i].getClase(k, j).getID() == 0) {
                            total++;
                        }
                    }
                }
                TotalClasesPorAsignacion.push_back(total);
                TotalClases += total;
            }

            //  // Calcular el número ideal de clases por aula
            double clasesPorAula = TotalClases / asignaciones.size();
            

            double utilizacionTotal = (TotalClases / (50 * aulas.size()))*100;

            double sumaDesviaciones = 0;

            for(int i = 0; i < TotalClasesPorAsignacion.size(); i++) {
                sumaDesviaciones += abs(TotalClasesPorAsignacion[i] - clasesPorAula);
            }

            double desviacionPromedio = sumaDesviaciones / TotalClasesPorAsignacion.size();
            double factorDistribucion = desviacionPromedio / clasesPorAula;
           factorDistribucion =  factorDistribucion*100;

           int cursosSinRepetir = ObtenerCursosSinRepetir();
          


           int ProfesoresSinRepetir = ObtenerProfesoresUtilizadosSinRepetir();
           

            double factorProfesores= ((getProfesoresIngresados() - ProfesoresSinRepetir)/getProfesoresIngresados())*100;
            double factorCursos = ((getCursosIngresados() - cursosSinRepetir)/getCursosIngresados() )*100;
         
          

            double brillo1 = (utilizacionTotal *10 - factorDistribucion * 9 - factorProfesores*10 - factorCursos*10) ;





       

            setBrillo(brillo1);






}


    bool BuscarProfesor(Profesor profesor) {
        for (int i = 0; i < profesores.size(); i++) {
            if (profesores[i].getNombre() == profesor.getNombre()) {
                return true;
            }
        }
        return false;
    }

    int ObtenerProfesoresUtilizadosSinRepetir()
    {
        vector<Profesor> profesoresUtilizados;
        for (int i = 0; i < asignaciones.size(); i++)
        {
            for (int j = 0; j < 5; j++)
            {
                for (int k = 0; k < 10; k++)
                {
                    bool encontrado = false;
                    for (int l = 0; l < profesoresUtilizados.size(); l++)
                    {
                        if (profesoresUtilizados[l].getNombre() == asignaciones[i].getClase(k, j).getProfesor().getNombre())
                        {
                            encontrado = true;
                            break;
                        }
           
                    }
                    if (encontrado == false)
                    {
                        if (asignaciones[i].getClase(k, j).getID() == 0)
                        {
                            profesoresUtilizados.push_back(asignaciones[i].getClase(k, j).getProfesor());
                        }
                    }
                }
            }
        }
        return profesoresUtilizados.size();
    }

    int ObtenerCursosSinRepetir()
    {
        vector<Curso> cursosUtilizados;
        for (int i = 0; i < asignaciones.size(); i++)
        {
            for (int j = 0; j < 5; j++)
            {
                for (int k = 0; k < 10; k++)
                {
                    bool encontrado = false;
                    for (int l = 0; l < cursosUtilizados.size(); l++)
                    {
                        if (cursosUtilizados[l].getNombre() == asignaciones[i].getClase(k, j).getCurso().getNombre())
                        {
                            encontrado = true;
                            break;
                        }
                    }
                    if (encontrado == false)
                    {
                        if (asignaciones[i].getClase(k, j).getID() == 0)
                        {
                            cursosUtilizados.push_back(asignaciones[i].getClase(k, j).getCurso());
                        }
                    }
                }
            }
        }
        return cursosUtilizados.size();
    }

 

    vector<Clase> ObtenerClases() {
        vector<Clase> clases;
        for (int i = 0; i < asignaciones.size(); i++) {
            for (int j = 0; j < 5; j++) {
                for (int k = 0; k < 10; k++) {
                    if (asignaciones[i].getClase(k, j).getID() == 0) {
                        clases.push_back(asignaciones[i].getClase(k, j));
                    }
                }
            }
        }
        return clases;
    }

    void EliminarClaseAleaetoriamente() {

        vector<Clase> clases = ObtenerClases();
        if (clases.empty()) {
            return;
        }
        int random = rand() % clases.size();
        int random1 = clases[random].getDia();
        int random2 = clases[random].getHora();
        Clase&  clase = clases[random];
        if (clase.getID() != -1) {




            if(!BuscarProfesor(clase.getProfesor())) {
                profesores.push_back(clase.getProfesor());
            }


            Profesor& profesor = profesores[GetProfesorIndex(clase.getProfesor().getNombre())];
            Aula& aula = aulas[GetAulaIndex(clase.getAula().getTipo())];
            Curso& curso = cursos[GetCursoIndex(clase.getCurso().getNombre())];
            Asignaciones& asignacion = getAsignacion(clase.getAula());
            asignacion.EliminarAsignacion(random2, random1);
            profesor.setDisponibilidad(true, random2, random1);
            aula.setDisponibilidad(true, random2, random1);


            if(getEstado(random2, random1) == 2) {
                setEstado(random2, random1, 0);
            }

        }


    }

    void AsignarUnaClaseAleatoriamente()
    {
        bool asignado = false;

        while (asignado == false)
        {
            
            
                    vector<int> horaDia = ObtenerHoraDiaAleatorioCon();

                if (horaDia.size() == 0 || profesores.empty() || aulas.empty() || cursos.empty())
                {
                   
                    break;
                }

                Clase clase = GenerarClase(horaDia[0], horaDia[1]);
                if(VerificarQueHayClasesPosiblesEnUnDiaHora(horaDia[0], horaDia[1]))
                {
                if (clase.getID() != -1)
                {
                   
                
                    

                    Profesor &profesor2 = profesores[GetProfesorIndex(clase.getProfesor().getNombre())];
                    Aula &aula = aulas[GetAulaIndex(clase.getAula().getTipo())];
                    Curso &curso = cursos[GetCursoIndex(clase.getCurso().getNombre())];
                    Asignaciones &asignacion = getAsignacion(clase.getAula());



                    if (asignacion.getTipo() != "")
                    {
                        asignacion.setClase(horaDia[0], horaDia[1], clase);
                    }

                    profesor2.setDisponibilidad(false, horaDia[0], horaDia[1]);

                    aula.setDisponibilidad(false, horaDia[0], horaDia[1]);

                    if (!revisarDisponibilidadProfesor(profesor2))
                    {
                        BorrarProfesor(profesor2);
                    }
                    asignado = true;
                    break;
                    
                }

                }

                else
                    {

                            setEstado(horaDia[0], horaDia[1], 2);

                    }
                
        
        }
       
    }


    void Mutar()
    {
        EliminarClaseAleaetoriamente();
        AsignarUnaClaseAleatoriamente();
    }

    void ParecerseAOtroHorario(Horario& horario, int asignacion, int dia, int hora)

    {
        if(horario.getAsignacion2(asignacion).getClase(hora, dia).getID() ==0)
        {
            if(VerificarQueHayClasesPosiblesEnUnDiaHora(hora, dia)){
            Clase clase = GenerarClase(hora, dia);
            if(clase.getID() != -1)
            {
                Profesor& profesor2 = profesores[GetProfesorIndex(clase.getProfesor().getNombre())];
                Aula& aula = aulas[GetAulaIndex(clase.getAula().getTipo())];
                Curso& curso = cursos[GetCursoIndex(clase.getCurso().getNombre())];
                Asignaciones& asignacion = getAsignacion(clase.getAula());
                if(asignacion.getTipo() != "")
                {
                    asignacion.setClase(hora, dia, clase);
                }
                profesor2.setDisponibilidad(false, hora, dia);
                if(!revisarDisponibilidadProfesor(profesor2))
                {
                    BorrarProfesor(profesor2);
                }
                aula.setDisponibilidad(false, hora, dia);
            }
            else
            {
                setEstado(hora, dia, 2);
            }
            }

        }
        else
        {
            if(getAsignacion2(asignacion).getClase(hora, dia).getID() == 0){

                 Clase clase2 = getAsignacion2(asignacion).getClase(hora, dia);


                 if(!BuscarProfesor(clase2.getProfesor()))
                 {
                     profesores.push_back(clase2.getProfesor());
                 }
                    Profesor& profesor = profesores[GetProfesorIndex(clase2.getProfesor().getNombre())];

                    Aula& aula = aulas[GetAulaIndex(clase2.getAula().getTipo())];
                    Curso& curso = cursos[GetCursoIndex(clase2.getCurso().getNombre())];
                    Asignaciones& asignacion = getAsignacion(clase2.getAula());
                    asignacion.setClase(hora, dia, Clase());
                    profesor.setDisponibilidad(true, hora, dia);
                    aula.setDisponibilidad(true, hora, dia);

                    if(getEstado(hora, dia) == 2)
                    {
                        setEstado(hora, dia, 0);
                    }
            }
        }
    }



    };

double CalcularDistancia(Horario& horario1, Horario& horario2) {
    double brillo1 = horario1.getBrillo();
    double brillo2 = horario2.getBrillo();
    
    return abs(brillo1 - brillo2);
}

void AlgoritmoLuciernagas(vector<Horario>& Horarios, double gamma, double beta, double iteraciones, double alpha){
    int n = Horarios.size();
    vector<double> brillos(n);

    for (int i = 0; i < n; i++)
    {
        brillos[i] = Horarios[i].getBrillo();
        cout << "Brillo de la luciernaga " << i << ": " << brillos[i] << endl;
    }

    for(int i = 0; i < iteraciones; i++)
    {
        cout << "Iteracion " << i << endl;
        for(int j = 0; j < n; j++)
        {
            for(int k = 0; k < n; k++)
            {
                if(brillos[j] < brillos[k])
                {
                    double distancia = CalcularDistancia(Horarios[j], Horarios[k]);
                    double beta0 = beta * exp(-gamma * pow(distancia, 2));
                    for(int m = 0; m < Horarios[j].getAsignaciones3().size(); m++)
                    {
                        for(int l = 0; l < 5; l++)
                        {
                            for(int r = 0; r < 10; r++)
                            {
                                if((double)rand() / RAND_MAX < beta0)
                                {
                                    Horarios[j].ParecerseAOtroHorario(Horarios[k], m, l, r);

                                }






                            }
                        }
                    }

                    if((double)rand() / RAND_MAX < alpha)
                    {
                        Horarios[j].Mutar();
                    }
                }
                else if (brillos[j] == brillos[k])
                {
                    if((double)rand() / RAND_MAX < alpha)
                    {
                        Horarios[j].Mutar();
                    }
                }
            }
        }

        for(int i = 0; i < n; i++)
        {
            Horarios[i].CalcularBrillo(Horarios[i]);
            brillos[i] = Horarios[i].getBrillo();
        }
    }

    for(int i = 0; i < n; i++)
    {
        cout << "Brillo final de la luciernaga " << i << ": " << brillos[i] << endl;
    }

    //Imprimir mayor luciernaga
    double mayor = 0;
    int indice = 0;
    for(int i = 0; i < n; i++)
    {
        if(brillos[i] > mayor)
        {
            mayor = brillos[i];
            indice = i;
        }
    }

    Horarios[indice].ImprimirHorario();
    cout << "Brillo mayor: " << mayor << endl;

}


void ImprimirBrillos(vector<Horario>& horarios) {
    for (int i = 0; i < horarios.size(); i++) {
        cout << "Brillo " << i << ": " << horarios[i].getBrillo() << endl;
    }
}

int main() {
    srand(time(0));
    bool disponibilidad[10][5]= { {true, true, true, true, true},
                                  {true, true, true, true, true},
                                  {true, true, true, true, true},
                                  {true, true, true, true, true},
                                  {true, true, true, true, true},
                                  {true, true, true, true, true},
                                  {true, true, true, true, true},
                                  {true, true, true, true, true},
                                  {true, true, true, true, true},
                                  {true, true, true, true, true} };

    bool disponibilidad1[10][5]= {{true, false, true, false, true},
                                  {true, false, true, false, true},
                                  {false, false, false, false, false},
                                  {true, false, true, false, true},
                                  {true, false, true, false, true},
                                  {false, true, false, true, false},
                                  {false, true, false, true, false},
                                  {false, false, false, false, false},
                                  {false, true, false, true, false},
                                  {false, true, false, true, false}};

    bool disponibilidad2[10][5]= {{false, true, false, true,false },
                                  {false, true, false, true, false},
                                  {false, false, false, false, false},
                                  {false, true, false, true, false},
                                  {false, true, false, true, false},
                                  {true, false, true, false, true},
                                  {true, false, true, false, true},
                                  {false, false, false, false, false},
                                  {true, false, true, false, true},
                                  {true, false, true, false, true}};
    bool disponibilidad3[10][5]= {{false, false, false, false, false},
                                  {false, true, false, true, false},
                                  {false, true, false, true, false},
                                  {false, false, false, false, false},
                                  {true, true, true, true, true},
                                  {true, true, true, true, true},
                                  {false, false, false, false, false},
                                  {true, false, true, false, true},
                                  {true, false, true, false, true},
                                  {false, false, false, false, false}};
    bool disponibilidad4[10][5]= {{false, false, false, false, false},
                                  {true, false, true, false, true},
                                  {true, false, true, false, true},
                                  {false, false, false, false, false},
                                  {true, true, true, true, true},
                                  {true, true, true, true, true},
                                  {false, false, false, false, false},
                                  {false, true, false, true, false},
                                  {false, true, false, true, false},
                                  {false, false, false, false, false}};
    bool disponibilidad5[10][5]= {{false, false, false, false, false},
                                  {false, false, false, false, false},
                                  {true, true, true, true, true},
                                  {true, true, true, true, true},
                                  {false, false, false, false, false},
                                  {true, true, true, true, true},
                                  {true, true, true, true, true},
                                  {false, false, false, false, false},
                                  {false, false, false, false, false},
                                  {false, false, false, false, false}};

    bool disponibilidad6[10][5]= {{false, false, true, false, false},
                                  {false, true, false, false, true},
                                  {true, false, true, false, true},
                                  {true, false, false, true, false},
                                  {false, true, true, false, true},
                                  {false, false, true, true, false},
                                  {false, true, false, false, true},
                                  {false, false, false, true, false},
                                  {true, false, false, true, false},
                                  {true, true, false, false, false}};

    bool disponibilidad7[10][5]=  {{false, false, false, true, false},
                                  {true, false, false, false, true},
                                  {false, true, true, false, true},
                                  {false, false, true, true, false},
                                  {true, true, false, false, false},
                                  {false, false, true, true, true},
                                  {true, false, true, false, true},
                                  {false, true, false, false, false},
                                  {false, true, false, false, false},
                                  {true, false, false, true, false}};

    bool disponibilidad8[10][5]= {{false, true, false, true,true },
                                  {true, false, true, true, true},
                                  {false, true, true, false, false},
                                  {false, true, false, false, true},
                                  {true, false, true, false, true},
                                  {false, true, true, false, false},
                                  {true, false, false, true,false },
                                  {true, false, false, true, false},
                                  {false, false, false, false, false},
                                  {false, false, false, false, false}};

    bool disponibilidad9[10][5]= {{false, false, false, false, false},
                                  {false, false, false, false, false},
                                  {false, false, true, true, false},
                                  {false, false, true, true, false},
                                  {false, false, false, false, false},
                                  {true, true, true, true, true},
                                  {true, true, true, true, true},
                                  {false, false, false, false, false},
                                  {true, true, false, false, true},
                                  {true, true, false, false, true}};

    bool disponibilidad10[10][5]= {{true, true, false, true,false},
                                  {true, false, false, true, false},
                                  {false, false, true, false, false},
                                  {false, true, true, true, true},
                                  {true, true, false, false, false},
                                  {true, false, true, false, true},
                                  {false, true, true, true, false},
                                  {false, false, false, false, false},
                                  {false, false, false, false, true},
                                  {false, false, false, false, true}};


    bool disponibilidad11[10][5]= {{true, false, false, false, false},
                                  {true, true, true, true, false},
                                  {false, true, true, false, false},
                                  {true, false, true, true, true},
                                  {true, true, false, false, true},
                                  {false, true, false, true, false},
                                  {false, false, true, true, false},
                                  {false, false, false, false, false},
                                  {false, false, false, false, true},
                                  {false, false, false, false, true}};

    bool disponibilidad12[10][5]= {{false, true, false, false, true},
                                   {false, false, false, false, false},
                                   {false, true, false, false, true},
                                   {true, false, false, true, false},
                                   {false, true, true, false, false},
                                   {true, false, true, true, false},
                                   {false, true, false, false, true},
                                   {true, false, true, true, false},
                                   {false, false, false, false, true},
                                   {true, false, true, true, false}};

    bool disponibilidad13[10][5]= 	{ {true, true, true, false, false},
                                  {true, true, true, false, false},
                                  {true, true, true, false, false},
                                  {false, false, false, false, false},
                                  {true, true, true, false, false},
                                  {true, true, true, false, false},
                                  {true, true, true, false, false},
                                  {false, false, false, false, false},
                                  {false, false, false, false, false},
                                  {false, false, false, false, false} };

    bool disponibilidad14[10][5]= { {false, false, false, false, false},
                                      {false, false, false, false, false},
                                      {false, false, false, false, false},
                                      {false, false, false, false, false},
                                      {false, false, false, false, false},
                                      {true, true, true, true, true},
                                      {true, true, true, true, true},
                                      {false, false, false, false, false},
                                      {true, true, true, true, true},
                                      {true, true, true, true, true} };

    bool disponibilidad15[10][5]= { {false, false, false, false, false},
                                      {false, false, false, true, true},
                                      {false, false, false, true, true},
                                      {false, false, false, false, false},
                                      {false, false, false, true, true},
                                      {true, true, true, true, true},
                                      {true, true, true, false, false},
                                      {false, false, false, false, false},
                                      {true, true, true, false, false},
                                      {true, true, true, false, false} };

    bool disponibilidad16[10][5]= { {true, true, true, false, false},
                                      {true, true, true, false, false},
                                      {false, false, false, false, false},
                                      {true, true, true, true, true},
                                      {true, true, true, true, true},
                                      {false, false, false, false, false},
                                      {false, false, false, true, true},
                                      {false, false, false, true, true},
                                      {false, false, false, false, false},
                                      {false, false, false, false, false}};

    bool disponibilidad17[10][5]= { {true, true, false, true, true},
                                      {true, true, false, true, true},
                                      {false, false, false, false, false},
                                      {false, false, false, false, false },
                                      {true, true, true, true, true},
                                      {true, true, true, true, true},
                                      {false, false, false, false, false},
                                      {false, false, true, false, false},
                                      {false, false, true, false, false},
                                      {false, false, false, false, false} };

    bool disponibilidad18[10][5]= { {false, false, false, false, false},
                                      {true, true, true, true, true},
                                      {true, true, true, true, true},
                                      {false, false, false, false, false},
                                      {false, false, false, false, false},
                                      {true, true, true, true, true},
                                      {true, true, true, true, true},
                                      {false, false, false, false, false},
                                      {false, false, false, false, false},
                                      {false, false, false, false, false} };

    bool disponibilidad19[10][5]= { {true, true, true, true, true},
                                      {true, true, true, true, true},
                                      {false, false, false, false, false},
                                      {true, true, true, true, true},
                                      {true, true, true, true, true},
                                      {false, false, false, false, false},
                                      {false, false, false, false, false},
                                      {false, false, false, false, false},
                                      {false, false, false, false, false},
                                      {false, false, false, false, false} };

    bool disponibilidad20[10][5]= {  {false, false, false, false, false},
                                      {false, false, false, false, false},
                                      {false, false, false, false, false},
                                      {false, false, false, false, false},
                                      {true, true, true, true, true},
                                      {true, true, true, true, true},
                                      {false, false, false, false, false},
                                      {false, false, false, false, false},
                                      {true, true, true, true, true},
                                      {true, true, true, true, true} };

    Profesor profesor1("Emilia Ramos", disponibilidad1, {"Algebra Lineal","Calculo Integral"});
    Profesor profesor2("Jorge Castillo", disponibilidad2, {"Geometria Analitica","Estadistica Aplicada"});
    Profesor profesor3("Sofia Vargas", disponibilidad3, {"Teoria de Numeros","Geometria Diferencial"});
    Profesor profesor4("Nicolas Herrera", disponibilidad4, {"Matematicas Discretas","Ecuaciones Diferenciales"});
    Profesor profesor5("Nathan Roberts", disponibilidad5, {"Topologia","Teoria de Juegos"});
    Profesor profesor6("Olivia Torres", disponibilidad6, {"Matematicas Computacionales","Algebra Lineal"});
    Profesor profesor7("Ana Garcia", disponibilidad7, {"Calculo Integral","Geometria Analitica"});
    Profesor profesor8("Sofia Martinez", disponibilidad8, {"Estadistica Aplicada","Teoria de Numeros"});

    Profesor profesor9("Maria Fernandez", disponibilidad9, {"Literatura Universal","Gramatica Espanola"});
    Profesor profesor10("Jose Paredes", disponibilidad10, {"Historia del Arte","Filosofia del Conocimiento"});
    Profesor profesor11("Isabel Ramirez", disponibilidad11, {"Lengua y Cultura Latina","Teatro y Dramaturgia"});
    Profesor profesor12("Luis Gutierrez", disponibilidad12, {"Historia de la Filosofia","Literatura Comparada"});
    Profesor profesor13("Miguel Santos", disponibilidad13, {"Redaccion y Comunicacion","Literatura Universal"});
    Profesor profesor14("Samuel Griffin", disponibilidad14, {"Gramatica Espanola","Historia del Arte"});
    Profesor profesor15("Mia Vega", disponibilidad15, {"Filosofia del Conocimiento","Lengua y Cultura Latina"});
    Profesor profesor16("Emma Hayes", disponibilidad16, {"Teatro y Dramaturgia","Historia de la Filosofia"});

    Profesor profesor17("Clara Diaz", disponibilidad17, {"Biologia Celular","Fisica Cuantica"});
    Profesor profesor18("Esteban Rivera", disponibilidad18, {"Quimica Organica","Ecologia y Medio Ambiente"});
    Profesor profesor19("Liliana Castillo", disponibilidad19, {"Anatomia Humana","Astrofisica y Cosmologia"});
    Profesor profesor20("Andres Pena", disponibilidad20, {"Biologia Molecular","Quimica Inorganica"});
    Profesor profesor21("Graciela Ortiz", disponibilidad1, {"Fisiologia Humana","Geologia General"});
    Profesor profesor22("Clara Diaz", disponibilidad2, {"Quimica fisica","Quimica Analitica"});
    Profesor profesor23("Mariana Flores", disponibilidad3, {"Quimica bioquimica","Botanica Avanzada"});
    Profesor profesor24("Grace Harris", disponibilidad4, {"Meteorologia y Climatologia","Biologia Celular"});
    Profesor profesor25("Andres Perez", disponibilidad5, {"Fisica Cuantica","Quimica Organica"});

    Curso curso1 ("Algebra Lineal", disponibilidad, "proyector");
    Curso curso2 ("Calculo Integral", disponibilidad, "proyector");
    Curso curso3 ("Geometria Analitica", disponibilidad, "proyector");
    Curso curso4 ("Estadistica Aplicada", disponibilidad, "proyector");
    Curso curso5 ("Teoria de Numeros", disponibilidad, "proyector");
    Curso curso6 ("Geometria Diferencial", disponibilidad, "proyector");
    Curso curso7 ("Matematicas Discretas", disponibilidad, "proyector");
    Curso curso8 ("Ecuaciones Diferenciales", disponibilidad, "proyector");
    Curso curso9 ("Topologia", disponibilidad, "proyector");
    Curso curso10 ("Teoria de Juegos", disponibilidad, "proyector");
    Curso curso11 ("Matematicas Computacionales", disponibilidad, "proyector");

    Curso curso12 ("Literatura Universal", disponibilidad, "informatica");
    Curso curso13 ("Gramatica Espanola", disponibilidad, "informatica");
    Curso curso14 ("Historia del Arte", disponibilidad, "audiovisual");
    Curso curso15 ("Filosofia del Conocimiento", disponibilidad, "informatica");
    Curso curso16 ("Lengua y Cultura Latina", disponibilidad, "informatica");
    Curso curso17 ("Teatro y Dramaturgia", disponibilidad, "audiovisual");
    Curso curso18 ("Historia de la Filosofia", disponibilidad, "informatica");
    Curso curso19 ("Literatura Comparada", disponibilidad, "informatica");
    Curso curso20 ("Redaccion y Comunicacion", disponibilidad, "proyector");

    Curso curso21 ("Biologia Celular", disponibilidad, "laboratorio");
    Curso curso22 ("Fisica Cuantica", disponibilidad, "audiovisual");
    Curso curso23 ("Quimica Organica", disponibilidad, "laboratorio");
    Curso curso24 ("Ecologia y Medio Ambiente", disponibilidad, "audiovisual");
    Curso curso25 ("Anatomia Humana", disponibilidad, "laboratorio");
    Curso curso26 ("Astrofisica y Cosmologia", disponibilidad, "audiovisual");
    Curso curso27 ("Biologia Molecular", disponibilidad, "laboratorio");
    Curso curso28 ("Quimica Inorganica", disponibilidad, "laboratorio");
    Curso curso29 ("Fisiologia Humana", disponibilidad, "audiovisual");
    Curso curso30 ("Geologia General", disponibilidad, "laboratorio");
    Curso curso31 ("Quimica Inorganica", disponibilidad, "laboratorio");
    Curso curso32 ("Fisiologia Humana", disponibilidad, "proyector");
    Curso curso33 ("Geologia General", disponibilidad, "proyector");
    Curso curso34 ("Botanica Avanzada", disponibilidad, "laboratorio");
    Curso curso35 ("Meteorologia y Climatologia", disponibilidad, "informatica");

    Aula aula1(10, "304", disponibilidad, "laboratorio");
    Aula aula2(10, "103", disponibilidad, "proyector");
    Aula aula3(10, "301", disponibilidad, "informatica");
    Aula aula4(10, "203", disponibilidad, "audiovisual");
    Aula aula5(10, "202", disponibilidad, "audiovisual");
    Aula aula6(10, "204", disponibilidad, "laboratorio");
    Aula aula7(10, "302", disponibilidad, "informatica");
    Aula aula8(10, "102", disponibilidad, "proyector");
    Aula aula9(10, "101", disponibilidad, "proyector");
    Aula aula10(10, "104", disponibilidad, "laboratorio");
    Aula aula11(10, "201", disponibilidad, "audiovisual");
    Aula aula12(10, "303", disponibilidad, "informatica");

    vector<Profesor> profesores = {profesor1, profesor2, profesor3, profesor4, profesor5, profesor6, profesor7, profesor8, profesor9, profesor10, profesor11, profesor12, profesor13, profesor14, profesor15, profesor16, profesor17, profesor18, profesor19, profesor20, profesor21, profesor22, profesor23, profesor24, profesor25};
    vector<Aula> aulas = {aula1, aula2, aula3, aula4, aula5, aula6, aula7, aula8, aula9, aula10, aula11, aula12};
    vector<Curso> cursos = {curso1, curso2, curso3, curso4, curso5, curso6, curso7, curso8, curso9, curso10, curso11, curso12, curso13, curso14, curso15, curso16, curso17, curso18, curso19, curso20, curso21, curso22, curso23, curso24, curso25, curso26, curso27, curso28, curso29, curso30, curso31, curso32, curso33, curso34, curso35};

    Horario horario1(profesores, aulas, cursos);
    horario1.GenerarHorario();
    horario1.CalcularBrillo(horario1);

    Horario horario2(profesores, aulas, cursos);
    horario2.GenerarHorario();
    horario2.CalcularBrillo(horario2);

    Horario horario3(profesores, aulas, cursos);
    horario3.GenerarHorario();
    horario3.CalcularBrillo(horario3);

    Horario horario4(profesores, aulas, cursos);
    horario4.GenerarHorario();
    horario4.CalcularBrillo(horario4);

    Horario horario5(profesores, aulas, cursos);
    horario5.GenerarHorario();
    horario5.CalcularBrillo(horario5);

    Horario horario6(profesores, aulas, cursos);
    horario6.GenerarHorario();
    horario6.CalcularBrillo(horario6);

    Horario horario7(profesores, aulas, cursos);
    horario7.GenerarHorario();
    horario7.CalcularBrillo(horario7);

    Horario horario8(profesores, aulas, cursos);
    horario8.GenerarHorario();
    horario8.CalcularBrillo(horario8);

    Horario horario9(profesores, aulas, cursos);
    horario9.GenerarHorario();
    horario9.CalcularBrillo(horario9);

    Horario horario10(profesores, aulas, cursos);
    horario10.GenerarHorario();
    horario10.CalcularBrillo(horario10);

    Horario horario11(profesores, aulas, cursos);
    horario11.GenerarHorario();
    horario11.CalcularBrillo(horario11);

    Horario horario12(profesores, aulas, cursos);
    horario12.GenerarHorario();
    horario12.CalcularBrillo(horario12);

    Horario horario13(profesores, aulas, cursos);
    horario13.GenerarHorario();
    horario13.CalcularBrillo(horario13);

    Horario horario14(profesores, aulas, cursos);
    horario14.GenerarHorario();
    horario14.CalcularBrillo(horario14);

    Horario horario15(profesores, aulas, cursos);
    horario15.GenerarHorario();
    horario15.CalcularBrillo(horario15);

    Horario horario16(profesores, aulas, cursos);
    horario16.GenerarHorario();
    horario16.CalcularBrillo(horario16);

    Horario horario17(profesores, aulas, cursos);
    horario17.GenerarHorario();
    horario17.CalcularBrillo(horario17);

    Horario horario18(profesores, aulas, cursos);
    horario18.GenerarHorario();
    horario18.CalcularBrillo(horario18);

    Horario horario19(profesores, aulas, cursos);
    horario19.GenerarHorario();
    horario19.CalcularBrillo(horario19);

    Horario horario20(profesores, aulas, cursos);
    horario20.GenerarHorario();
    horario20.CalcularBrillo(horario20);

    Horario horario21(profesores, aulas, cursos);
    horario21.GenerarHorario();
    horario21.CalcularBrillo(horario21);


    Horario horario22(profesores, aulas, cursos);
    horario22.GenerarHorario();
    horario22.CalcularBrillo(horario22);

    Horario horario23(profesores, aulas, cursos);
    horario23.GenerarHorario();
    horario23.CalcularBrillo(horario23);

    Horario horario24(profesores, aulas, cursos);
    horario24.GenerarHorario();
    horario24.CalcularBrillo(horario24);

    Horario horario25(profesores, aulas, cursos);
    horario25.GenerarHorario();
    horario25.CalcularBrillo(horario25);








    vector<Horario> Horarios = {horario1, horario2, horario3, horario4, horario5, horario6, horario7, horario8, horario9, horario10, horario11, horario12, horario13, horario14, horario15, horario16, horario17, horario18, horario19, horario20, horario21, horario22, horario23, horario24, horario25};

    AlgoritmoLuciernagas(Horarios, 0.2, 1.5, 50, 0.5);


    return 0;
}
