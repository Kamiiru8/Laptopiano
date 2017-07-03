#include "klasaglowna.h"
#include "ui_klasaglowna.h"
#include "baza.h"
#include <QKeyEvent>

KlasaGlowna::KlasaGlowna(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::KlasaGlowna)
{
    ui->setupUi(this);
}

KlasaGlowna::~KlasaGlowna()
{
    delete ui;
}


void KlasaGlowna::keyPressEvent(QKeyEvent *e) {
    switch(e->key()){
    case Qt::Key_1: {ui->pushButton->animateClick();} break;
    case Qt::Key_Exclam: {ui->pushButton_40->animateClick();} break;
    case Qt::Key_2: {ui->pushButton_2->animateClick();} break;
    case Qt::Key_At: {ui->pushButton_41->animateClick();} break;
    case Qt::Key_3: {ui->pushButton_3->animateClick();} break;
    case Qt::Key_NumberSign: {} break;
    case Qt::Key_4: {ui->pushButton_4->animateClick();} break;
    case Qt::Key_Dollar: {ui->pushButton_42->animateClick();} break;
    case Qt::Key_5: {ui->pushButton_5->animateClick();} break;
    case Qt::Key_Percent: {ui->pushButton_43->animateClick();} break;
    case Qt::Key_6: {ui->pushButton_6->animateClick();} break;
    case Qt::Key_AsciiCircum: {ui->pushButton_44->animateClick();} break;
    case Qt::Key_7: {ui->pushButton_7->animateClick();} break;
    case Qt::Key_Ampersand: {} break;
    case Qt::Key_8: {ui->pushButton_8->animateClick();} break;
    case Qt::Key_Asterisk: {ui->pushButton_45->animateClick();} break;
    case Qt::Key_9: {ui->pushButton_9->animateClick();} break;
    case Qt::Key_ParenLeft: {ui->pushButton_46->animateClick();} break;
    case Qt::Key_0: {ui->pushButton_10->animateClick();} break;
    case Qt::Key_ParenRight: {} break;
    case Qt::Key_Q: if(e->modifiers() & Qt::ShiftModifier) {ui->pushButton_47->animateClick();}
                        else {ui->pushButton_11->animateClick();} break;
    case Qt::Key_W: if(e->modifiers() & Qt::ShiftModifier) {ui->pushButton_48->animateClick();}
                        else {ui->pushButton_12->animateClick();} break;
    case Qt::Key_E: if(e->modifiers() & Qt::ShiftModifier) {ui->pushButton_49->animateClick();}
                        else {ui->pushButton_13->animateClick();} break;
    case Qt::Key_R: if(e->modifiers() & Qt::ShiftModifier){}
                        else {ui->pushButton_14->animateClick();} break;
    case Qt::Key_T: if(e->modifiers() & Qt::ShiftModifier) {ui->pushButton_50->animateClick();}
                        else{ui->pushButton_15->animateClick();} break;
    case Qt::Key_Y: if(e->modifiers() & Qt::ShiftModifier) {ui->pushButton_51->animateClick();}
                        else{ui->pushButton_16->animateClick();} break;
    case Qt::Key_U: if(e->modifiers() & Qt::ShiftModifier){}
                        else {ui->pushButton_17->animateClick();} break;
    case Qt::Key_I: if(e->modifiers() & Qt::ShiftModifier) {ui->pushButton_52->animateClick();}
                        else {ui->pushButton_18->animateClick();} break;
    case Qt::Key_O: if(e->modifiers() & Qt::ShiftModifier) {ui->pushButton_53->animateClick();}
                        else {ui->pushButton_19->animateClick();} break;
    case Qt::Key_P: if(e->modifiers() & Qt::ShiftModifier) {ui->pushButton_54->animateClick();}
                        else {ui->pushButton_20->animateClick();} break;
    case Qt::Key_A: if(e->modifiers() & Qt::ShiftModifier){}
                        else {ui->pushButton_21->animateClick();} break;
    case Qt::Key_S: if(e->modifiers() & Qt::ShiftModifier) {ui->pushButton_55->animateClick();}
                        else {ui->pushButton_22->animateClick();} break;
    case Qt::Key_D: if(e->modifiers() & Qt::ShiftModifier) {ui->pushButton_56->animateClick();}
                        else {ui->pushButton_23->animateClick();} break;
    case Qt::Key_F: if(e->modifiers() & Qt::ShiftModifier){}
                        else {ui->pushButton_24->animateClick();} break;
    case Qt::Key_G: if(e->modifiers() & Qt::ShiftModifier) {ui->pushButton_57->animateClick();}
                        else {ui->pushButton_25->animateClick();} break;
    case Qt::Key_H: if(e->modifiers() & Qt::ShiftModifier) {ui->pushButton_58->animateClick();}
                        else {ui->pushButton_26->animateClick();} break;
    case Qt::Key_J: if(e->modifiers() & Qt::ShiftModifier) {ui->pushButton_59->animateClick();}
                        else {ui->pushButton_27->animateClick();} break;
    case Qt::Key_K: if(e->modifiers() & Qt::ShiftModifier) {}
                        else {ui->pushButton_28->animateClick();} break;
    case Qt::Key_L: if(e->modifiers() & Qt::ShiftModifier) {ui->pushButton_60->animateClick();}
                        else {ui->pushButton_29->animateClick();} break;
    case Qt::Key_Z: if(e->modifiers() & Qt::ShiftModifier) {ui->pushButton_61->animateClick();}
                        else {ui->pushButton_30->animateClick();} break;
    case Qt::Key_X: if(e->modifiers() & Qt::ShiftModifier) {}
                        else {ui->pushButton_31->animateClick();} break;
    case Qt::Key_C: if(e->modifiers() & Qt::ShiftModifier) {ui->pushButton_62->animateClick();}
                        else {ui->pushButton_32->animateClick();} break;
    case Qt::Key_V: if(e->modifiers() & Qt::ShiftModifier) {ui->pushButton_63->animateClick();}
                        else {ui->pushButton_33->animateClick();} break;
    case Qt::Key_B: if(e->modifiers() & Qt::ShiftModifier) {ui->pushButton_64->animateClick();}
                        else {ui->pushButton_34->animateClick();} break;
    case Qt::Key_N: if(e->modifiers() & Qt::ShiftModifier){ }
                        else {ui->pushButton_35->animateClick();} break;
    case Qt::Key_M: if(e->modifiers() & Qt::ShiftModifier){}
                        else {ui->pushButton_36->animateClick();} break;
    case Qt::Key_Escape: close(); break;}}


void KlasaGlowna::on_pushButton_clicked()    {QSound::play(":/1.wav"); ui->label->setText("1");}
void KlasaGlowna::on_pushButton_2_clicked()  {QSound::play(":/2.wav"); ui->label->setText("2");}
void KlasaGlowna::on_pushButton_3_clicked()  {QSound::play(":/3.wav"); ui->label->setText("3");}
void KlasaGlowna::on_pushButton_4_clicked()  {QSound::play(":/4.wav"); ui->label->setText("4");}
void KlasaGlowna::on_pushButton_5_clicked()  {QSound::play(":/5.wav"); ui->label->setText("5");}
void KlasaGlowna::on_pushButton_6_clicked()  {QSound::play(":/6.wav"); ui->label->setText("6");}
void KlasaGlowna::on_pushButton_7_clicked()  {QSound::play(":/7.wav"); ui->label->setText("7");}
void KlasaGlowna::on_pushButton_8_clicked()  {QSound::play(":/8.wav"); ui->label->setText("8");}
void KlasaGlowna::on_pushButton_9_clicked()  {QSound::play(":/9.wav"); ui->label->setText("9");}
void KlasaGlowna::on_pushButton_10_clicked() {QSound::play(":/10.wav"); ui->label->setText("0");}
void KlasaGlowna::on_pushButton_11_clicked() {QSound::play(":/11.wav"); ui->label->setText("q");}
void KlasaGlowna::on_pushButton_12_clicked() {QSound::play(":/12.wav"); ui->label->setText("w");}
void KlasaGlowna::on_pushButton_13_clicked() {QSound::play(":/13.wav"); ui->label->setText("e");}
void KlasaGlowna::on_pushButton_14_clicked() {QSound::play(":/14.wav"); ui->label->setText("r");}
void KlasaGlowna::on_pushButton_15_clicked() {QSound::play(":/15.wav"); ui->label->setText("t");}
void KlasaGlowna::on_pushButton_16_clicked() {QSound::play(":/16.wav"); ui->label->setText("y");}
void KlasaGlowna::on_pushButton_17_clicked() {QSound::play(":/17.wav"); ui->label->setText("u");}
void KlasaGlowna::on_pushButton_18_clicked() {QSound::play(":/18.wav"); ui->label->setText("i");}
void KlasaGlowna::on_pushButton_19_clicked() {QSound::play(":/19.wav"); ui->label->setText("o");}
void KlasaGlowna::on_pushButton_20_clicked() {QSound::play(":/20.wav"); ui->label->setText("p");}
void KlasaGlowna::on_pushButton_21_clicked() {QSound::play(":/21.wav"); ui->label->setText("a");}
void KlasaGlowna::on_pushButton_22_clicked() {QSound::play(":/22.wav"); ui->label->setText("s");}
void KlasaGlowna::on_pushButton_23_clicked() {QSound::play(":/23.wav"); ui->label->setText("d");}
void KlasaGlowna::on_pushButton_24_clicked() {QSound::play(":/24.wav"); ui->label->setText("f");}
void KlasaGlowna::on_pushButton_25_clicked() {QSound::play(":/25.wav"); ui->label->setText("g");}
void KlasaGlowna::on_pushButton_26_clicked() {QSound::play(":/26.wav"); ui->label->setText("h");}
void KlasaGlowna::on_pushButton_27_clicked() {QSound::play(":/27.wav"); ui->label->setText("j");}
void KlasaGlowna::on_pushButton_28_clicked() {QSound::play(":/28.wav"); ui->label->setText("k");}
void KlasaGlowna::on_pushButton_29_clicked() {QSound::play(":/29.wav"); ui->label->setText("l");}
void KlasaGlowna::on_pushButton_30_clicked() {QSound::play(":/30.wav"); ui->label->setText("z");}
void KlasaGlowna::on_pushButton_31_clicked() {QSound::play(":/31.wav"); ui->label->setText("x");}
void KlasaGlowna::on_pushButton_32_clicked() {QSound::play(":/32.wav"); ui->label->setText("c");}
void KlasaGlowna::on_pushButton_33_clicked() {QSound::play(":/33.wav"); ui->label->setText("v");}
void KlasaGlowna::on_pushButton_34_clicked() {QSound::play(":/34.wav"); ui->label->setText("b");}
void KlasaGlowna::on_pushButton_35_clicked() {QSound::play(":/35.wav"); ui->label->setText("n");}
void KlasaGlowna::on_pushButton_36_clicked() {QSound::play(":/36.wav"); ui->label->setText("m");}

void KlasaGlowna::on_pushButton_39_clicked() {
    if( ui->pushButton_39->isChecked() ) ui->pushButton->setText("1"); else ui->pushButton->setText("");
    if( ui->pushButton_39->isChecked() ) ui->pushButton_2->setText("2"); else ui->pushButton_2->setText("");
    if( ui->pushButton_39->isChecked() ) ui->pushButton_3->setText("3"); else ui->pushButton_3->setText("");
    if( ui->pushButton_39->isChecked() ) ui->pushButton_4->setText("4"); else ui->pushButton_4->setText("");
    if( ui->pushButton_39->isChecked() ) ui->pushButton_5->setText("5"); else ui->pushButton_5->setText("");
    if( ui->pushButton_39->isChecked() ) ui->pushButton_6->setText("6"); else ui->pushButton_6->setText("");
    if( ui->pushButton_39->isChecked() ) ui->pushButton_7->setText("7"); else ui->pushButton_7->setText("");
    if( ui->pushButton_39->isChecked() ) ui->pushButton_8->setText("8"); else ui->pushButton_8->setText("");
    if( ui->pushButton_39->isChecked() ) ui->pushButton_9->setText("9"); else ui->pushButton_9->setText("");
    if( ui->pushButton_39->isChecked() ) ui->pushButton_10->setText("0"); else ui->pushButton_10->setText("");
    if( ui->pushButton_39->isChecked() ) ui->pushButton_11->setText("q"); else ui->pushButton_11->setText("");
    if( ui->pushButton_39->isChecked() ) ui->pushButton_12->setText("w"); else ui->pushButton_12->setText("");
    if( ui->pushButton_39->isChecked() ) ui->pushButton_13->setText("e"); else ui->pushButton_13->setText("");
    if( ui->pushButton_39->isChecked() ) ui->pushButton_14->setText("r"); else ui->pushButton_14->setText("");
    if( ui->pushButton_39->isChecked() ) ui->pushButton_15->setText("t"); else ui->pushButton_15->setText("");
    if( ui->pushButton_39->isChecked() ) ui->pushButton_16->setText("y"); else ui->pushButton_16->setText("");
    if( ui->pushButton_39->isChecked() ) ui->pushButton_17->setText("u"); else ui->pushButton_17->setText("");
    if( ui->pushButton_39->isChecked() ) ui->pushButton_18->setText("i"); else ui->pushButton_18->setText("");
    if( ui->pushButton_39->isChecked() ) ui->pushButton_19->setText("o"); else ui->pushButton_19->setText("");
    if( ui->pushButton_39->isChecked() ) ui->pushButton_20->setText("p"); else ui->pushButton_20->setText("");
    if( ui->pushButton_39->isChecked() ) ui->pushButton_21->setText("a"); else ui->pushButton_21->setText("");
    if( ui->pushButton_39->isChecked() ) ui->pushButton_22->setText("s"); else ui->pushButton_22->setText("");
    if( ui->pushButton_39->isChecked() ) ui->pushButton_23->setText("d"); else ui->pushButton_23->setText("");
    if( ui->pushButton_39->isChecked() ) ui->pushButton_24->setText("f"); else ui->pushButton_24->setText("");
    if( ui->pushButton_39->isChecked() ) ui->pushButton_25->setText("g"); else ui->pushButton_25->setText("");
    if( ui->pushButton_39->isChecked() ) ui->pushButton_26->setText("h"); else ui->pushButton_26->setText("");
    if( ui->pushButton_39->isChecked() ) ui->pushButton_27->setText("j"); else ui->pushButton_27->setText("");
    if( ui->pushButton_39->isChecked() ) ui->pushButton_28->setText("k"); else ui->pushButton_28->setText("");
    if( ui->pushButton_39->isChecked() ) ui->pushButton_29->setText("l"); else ui->pushButton_29->setText("");
    if( ui->pushButton_39->isChecked() ) ui->pushButton_30->setText("z"); else ui->pushButton_30->setText("");
    if( ui->pushButton_39->isChecked() ) ui->pushButton_31->setText("x"); else ui->pushButton_31->setText("");
    if( ui->pushButton_39->isChecked() ) ui->pushButton_32->setText("c"); else ui->pushButton_32->setText("");
    if( ui->pushButton_39->isChecked() ) ui->pushButton_33->setText("v"); else ui->pushButton_33->setText("");
    if( ui->pushButton_39->isChecked() ) ui->pushButton_34->setText("b"); else ui->pushButton_34->setText("");
    if( ui->pushButton_39->isChecked() ) ui->pushButton_35->setText("n"); else ui->pushButton_35->setText("");
    if( ui->pushButton_39->isChecked() ) ui->pushButton_36->setText("m"); else ui->pushButton_36->setText("");}
void KlasaGlowna::on_pushButton_40_clicked() {QSound::play(":/x1.wav"); ui->label->setText("!");}
void KlasaGlowna::on_pushButton_41_clicked() {QSound::play(":/x2.wav"); ui->label->setText("@");}
void KlasaGlowna::on_pushButton_42_clicked() {QSound::play(":/x3.wav"); ui->label->setText("$");}
void KlasaGlowna::on_pushButton_43_clicked() {QSound::play(":/x4.wav"); ui->label->setText("%");}
void KlasaGlowna::on_pushButton_44_clicked() {QSound::play(":/x5.wav"); ui->label->setText("^");}
void KlasaGlowna::on_pushButton_45_clicked() {QSound::play(":/x6.wav"); ui->label->setText("*");}
void KlasaGlowna::on_pushButton_46_clicked() {QSound::play(":/x7.wav"); ui->label->setText("(");}
void KlasaGlowna::on_pushButton_47_clicked() {QSound::play(":/x8.wav"); ui->label->setText("Q");}
void KlasaGlowna::on_pushButton_48_clicked() {QSound::play(":/x9.wav"); ui->label->setText("W");}
void KlasaGlowna::on_pushButton_49_clicked() {QSound::play(":/x10.wav"); ui->label->setText("E");}
void KlasaGlowna::on_pushButton_50_clicked() {QSound::play(":/x11.wav"); ui->label->setText("T");}
void KlasaGlowna::on_pushButton_51_clicked() {QSound::play(":/x12.wav"); ui->label->setText("Y");}
void KlasaGlowna::on_pushButton_52_clicked() {QSound::play(":/x13.wav"); ui->label->setText("I");}
void KlasaGlowna::on_pushButton_53_clicked() {QSound::play(":/x14.wav"); ui->label->setText("O");}
void KlasaGlowna::on_pushButton_54_clicked() {QSound::play(":/x15.wav"); ui->label->setText("P");}
void KlasaGlowna::on_pushButton_55_clicked() {QSound::play(":/x16.wav"); ui->label->setText("S");}
void KlasaGlowna::on_pushButton_56_clicked() {QSound::play(":/x17.wav"); ui->label->setText("D");}
void KlasaGlowna::on_pushButton_57_clicked() {QSound::play(":/x18.wav"); ui->label->setText("G");}
void KlasaGlowna::on_pushButton_58_clicked() {QSound::play(":/x19.wav"); ui->label->setText("H");}
void KlasaGlowna::on_pushButton_59_clicked() {QSound::play(":/x20.wav"); ui->label->setText("J");}
void KlasaGlowna::on_pushButton_60_clicked() {QSound::play(":/x21.wav"); ui->label->setText("L");}
void KlasaGlowna::on_pushButton_61_clicked() {QSound::play(":/x22.wav"); ui->label->setText("Z");}
void KlasaGlowna::on_pushButton_62_clicked() {QSound::play(":/x23.wav"); ui->label->setText("C");}
void KlasaGlowna::on_pushButton_63_clicked() {QSound::play(":/x24.wav"); ui->label->setText("V");}
void KlasaGlowna::on_pushButton_64_clicked() {QSound::play(":/x25.wav"); ui->label->setText("B");}

void KlasaGlowna::on_pushButton_65_clicked()
{
    Baza baza;
    baza.setModal(false);
    baza.show();
    baza.exec();
}
