#pragma once
#ifndef HEADER2_E2
#define HEADER2_E2

enum choose {kRiguas, kPasteles, kAtoles};

struct Pedidos {
    double total_riguas = 0.0;
    double total_pasteles = 0.0;
    double total_atoles = 0.0;
    double total_compra  = 0.0;
};

double total = 0.0;

//Prototypes
void BuyItem(choose, Pedidos*);
void ShowGanancias(int, Pedidos[]);

//Functions
void ShowMenu(int total_clientes) {
    int option = 0;
    bool continuar = true;
    choose opcion_cliente;

    Pedidos* cola_clientes = new Pedidos[total_clientes];

    for (int i = 0; i < total_clientes; ++i) {
        continuar = true;
        do {
            std::cout << "===== MENU =====" << std::endl;
            std::cout << "\t 1 - Comprar Riguas." << std::endl;
            std::cout << "\t 2 - Comprar Pasteles." << std::endl;
            std::cout << "\t 3 - Comprar Atoles." << std::endl;
            std::cout << "\t 4 - Terminar compra de cliente." << std::endl;
            
            std::cout << "Opcion: ";
            std::cin >> option;
            std::cout << std::endl;

            switch(option) {
                case 1:
                    opcion_cliente = kRiguas;
                    BuyItem(opcion_cliente, &cola_clientes[i]);
                    break;
                case 2:
                    opcion_cliente = kPasteles;
                    BuyItem(opcion_cliente, &cola_clientes[i]);
                    break;
                case 3:
                    opcion_cliente = kAtoles;
                    BuyItem(opcion_cliente, &cola_clientes[i]);
                    break;
                case 4:
                    cola_clientes[i].total_compra += (cola_clientes[i].total_riguas + cola_clientes[i].total_pasteles + cola_clientes[i].total_atoles);
                    continuar = false;
                    break;
                default:
                    std::cout << "Esa opcion no existe" << std::endl;
            }
        } while (continuar);
    }

    ShowGanancias(total_clientes, cola_clientes);

    delete[] cola_clientes;
}

void BuyItem(choose opcion_cliente, Pedidos* cola_clientes) {
    int total_a_llevar = 0;

    switch (opcion_cliente) {
        case kRiguas:
            std::cout << "Cuantas riguas quiere comprar: ";
            std::cin >> total_a_llevar;
            std::cout << std::endl;

            //(*cola_clientes).total_riguas += (0.75 * total_a_llevar);
            cola_clientes->total_riguas += (0.75 * total_a_llevar);
            break;
        case kPasteles:
            std::cout << "Cuantos pasteles quiere comprar: ";
            std::cin >> total_a_llevar;
            std::cout << std::endl;

            cola_clientes->total_pasteles += (0.50 * total_a_llevar);
            break;
        case kAtoles:
            std::cout << "Cuantos atoles quiere comprar: ";
            std::cin >> total_a_llevar;
            std::cout << std::endl;

            cola_clientes->total_atoles += (0.60 * total_a_llevar);
            break;
    }
}

void ShowGanancias(int total_clientes, Pedidos cola_clientes[]) {
    for (int i = 0; i < total_clientes; ++i) {
        total += cola_clientes[i].total_compra;
    }

    std::cout << std::endl << "Ganancias de esta cola: $" << total;
}

#endif