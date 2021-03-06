/*******************************************************
Uygulama Adi: PIC16F877 ile Led Yakma-Sondurme Programi
Programin Amaci: Bu program ile B portuna bagli 8 adet 
LED'i TOGGLE komutu ile sirayla yakip sondurmektir
*******************************************************/


// Kullanilacak PIC'in baslik dosyasi tanitiliyor
#include <16f877.h> 

//PIC konfigurasyon ayarlari:
#fuses XT,NOWDT,NOPROTECT,NOBROWNOUT,NOLVP,NOPUT,NOWRT,NODEBUG,NOCPD

// Osilator frekansi seciliyor:
#use delay(clock=4000000)

// Port yonlendirme komutlari PORT(B) icin ayarlaniyor
#use fast_io(b)

void main()
{

   setup_adc_ports(NO_ANALOGS); // Analog giris yok
   setup_adc(ADC_OFF); // ADC birimi devre disi
   setup_psp(PSP_DISABLED); // PSP birimi devre disi
   setup_spi(SPI_SS_DISABLED); //SPI interface birimi devre disi
   setup_timer_0(RTCC_INTERNAL|RTCC_DIV_1);// CCP birimi devre disi
   setup_timer_1(T1_DISABLED); // Timer 1 birimi devre disi
   setup_timer_2(T2_DISABLED,0,1); // Timer 2 birimi devre disi

   set_tris_b(0x00); // PORT(B) komple cikis (output) olarak ayarlaniyor
   output_b(0x00); // PORT(B) komple cikisi sifir (low) yapiliyor
   while(1)
   {
      delay_ms(500); // 500 ms'lik gecikme veriliyor
      output_toggle(pin_b0); // PORT(B.0) cikisi tersleniyor
      delay_ms(500); // 500 ms'lik gecikme veriliyor
      output_toggle(pin_b1); // PORT(B.1) cikisi tersleniyor
      delay_ms(500); // 500 ms'lik gecikme veriliyor
      output_toggle(pin_b2); // PORT(B.2) cikisi tersleniyor
      delay_ms(500); // 500 ms'lik gecikme veriliyor
      output_toggle(pin_b3); // PORT(B.3) cikisi tersleniyor
      delay_ms(500); // 500 ms'lik gecikme veriliyor
      output_toggle(pin_b4); // PORT(B.4) cikisi tersleniyor
      delay_ms(500); // 500 ms'lik gecikme veriliyor
      output_toggle(pin_b5); // PORT(B.5) cikisi tersleniyor
      delay_ms(500); // 500 ms'lik gecikme veriliyor
      output_toggle(pin_b6); // PORT(B.6) cikisi tersleniyor
      delay_ms(500); // 500 ms'lik gecikme veriliyor
      output_toggle(pin_b7); // PORT(B.7) cikisi tersleniyor
   }

}
