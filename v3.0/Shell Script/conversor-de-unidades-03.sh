#!/bin/bash
# Conversor de Unidades em Shell Script

# Escolher entre português, inglês ou espanhol usando whiptail
LANGUAGE=$(whiptail --title "Escolha o idioma | Choose the language | Elija el idioma" --menu "Selecione uma opção | Select an option | Seleccione una opción" 15 80 3 \
"1" "Português | Portuguese | Portugués" \
"2" "Inglês | English | Inglés" \
"3" "Espanhol | Spanish | Español" 3>&1 1>&2 2>&3)

# Carregar o arquivo de idioma correspondente
case $LANGUAGE in
    1)
        source português.sh
        ;;
    2)
        source english.sh
        ;;
    3)
        source español.sh
        ;;
    *)
        echo "Opção inválida. | Invalid option. | Opción inválida."
        exit 1
        ;;
esac
