/*
 * This file is part of the µOS++ distribution.
 *   (https://github.com/micro-os-plus)
 * Copyright (c) 2017 Liviu Ionescu.
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use,
 * copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom
 * the Software is furnished to do so, subject to the following
 * conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 */

#ifndef SIFIVE_DEVICES_ARTY_E31_DEVICE_INTERRUPTS_HANDLERS_H_
#define SIFIVE_DEVICES_ARTY_E31_DEVICE_INTERRUPTS_HANDLERS_H_

/*
 * SiFive Arty E31 global interrupts handler functions.
 */

// ----------------------------------------------------------------------------
#if defined(__cplusplus)
extern "C"
{
#endif /* defined(__cplusplus) */

  // --------------------------------------------------------------------------
  // Global interrupt handlers. 
  // Read the names as `sifive::e31arty::interrupt::global::handle_uart0()`.

  void
  sifive_interrupt_global_handle_uart0 (void);

  void
  sifive_interrupt_global_handle_external (void);

  void
  sifive_interrupt_global_handle_spi0 (void);

  void
  sifive_interrupt_global_handle_gpio0 (void);

  void
  sifive_interrupt_global_handle_gpio1 (void);

  void
  sifive_interrupt_global_handle_gpio2 (void);

  void
  sifive_interrupt_global_handle_gpio3 (void);

  void
  sifive_interrupt_global_handle_gpio4 (void);

  void
  sifive_interrupt_global_handle_gpio5 (void);

  void
  sifive_interrupt_global_handle_gpio6 (void);

  void
  sifive_interrupt_global_handle_gpio7 (void);

  void
  sifive_interrupt_global_handle_gpio8 (void);

  void
  sifive_interrupt_global_handle_gpio9 (void);

  void
  sifive_interrupt_global_handle_gpio10 (void);

  void
  sifive_interrupt_global_handle_gpio11 (void);

  void
  sifive_interrupt_global_handle_gpio12 (void);

  void
  sifive_interrupt_global_handle_gpio13 (void);

  void
  sifive_interrupt_global_handle_gpio14 (void);

  void
  sifive_interrupt_global_handle_gpio15 (void);

  void
  sifive_interrupt_global_handle_pwm0cmp0 (void);

  void
  sifive_interrupt_global_handle_pwm0cmp1 (void);

  void
  sifive_interrupt_global_handle_pwm0cmp2 (void);

  void
  sifive_interrupt_global_handle_pwm0cmp3 (void);

  // --------------------------------------------------------------------------
  // Local interrupt handlers.
  // Read the names as `riscv::interrupt::local::device0()`.

  // Architecture common handlers.
  void
  riscv_interrupt_local_handle_machine_software (void);

  void
  riscv_interrupt_local_handle_machine_timer (void);

  void
  riscv_interrupt_local_handle_machine_ext (void);

  // Device specific handlers.
  void
  sifive_interrupt_local_handle_device0 (void);

  void
  sifive_interrupt_local_handle_device1 (void);

  void
  sifive_interrupt_local_handle_device2 (void);

  void
  sifive_interrupt_local_handle_device3 (void);

  void
  sifive_interrupt_local_handle_device4 (void);

  void
  sifive_interrupt_local_handle_device5 (void);

  void
  sifive_interrupt_local_handle_device6 (void);

  void
  sifive_interrupt_local_handle_device7 (void);

  void
  sifive_interrupt_local_handle_device8 (void);

  void
  sifive_interrupt_local_handle_device9 (void);

  void
  sifive_interrupt_local_handle_device10 (void);

  void
  sifive_interrupt_local_handle_device11 (void);

  void
  sifive_interrupt_local_handle_device12 (void);

  void
  sifive_interrupt_local_handle_device13 (void);

  void
  sifive_interrupt_local_handle_device14 (void);

  void
  sifive_interrupt_local_handle_device15 (void);

// ----------------------------------------------------------------------------

#if defined(__cplusplus)
}
#endif /* defined(__cplusplus) */

// ----------------------------------------------------------------------------

#endif /* SIFIVE_DEVICES_ARTY_E31_DEVICE_INTERRUPTS_HANDLERS_H_ */
