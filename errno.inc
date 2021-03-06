;=========================================================================
; errno.inc - POST checkpoint codes (sent to port 80h during POST)
;-------------------------------------------------------------------------
;
; Compiles with NASM 2.11.08, might work with other versions
;
; Copyright (C) 2010 - 2019 Sergey Kiselev.
; Provided for hobbyist use on the Xi 8088 and Micro 8088 boards.
;
; This program is free software: you can redistribute it and/or modify
; it under the terms of the GNU General Public License as published by
; the Free Software Foundation, either version 3 of the License, or
; (at your option) any later version.
;
; This program is distributed in the hope that it will be useful,
; but WITHOUT ANY WARRANTY; without even the implied warranty of
; MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
; GNU General Public License for more details.
;
; You should have received a copy of the GNU General Public License
; along with this program.  If not, see <http://www.gnu.org/licenses/>.
;
;=========================================================================

e_boot		equ	00h		; Boot the OS
e_start		equ	01h		; BIOS POST started
e_cpu_ok	equ	02h		; CPU test passed
e_dmac_ok	equ	03h		; DMAC initialized
e_low_ram_ok	equ	04h		; low RAM test passed
e_int_ok	equ	05h		; interrupt table initialized
e_pit_ok	equ	06h		; PIT (timer) initialized
e_pic_ok	equ	08h		; PIC initialized
e_kbd_ok	equ	10h		; KBD test passed
e_video_bios_ok	equ	11h		; Video BIOS found
e_video_init_ok	equ	12h		; Video BIOS initialized
e_rtc_init_ok	equ	20h		; RTC initialized
e_cpu_detect_ok	equ	21h		; CPU type detected
e_fpu_detect_ok	equ	22h		; FPU type detected
e_serial_ok	equ	24h		; Serial port scan finished
e_parallel_ok	equ	25h		; Parallel port scan finished
e_ram_start	equ	30h		; RAM test start
e_ram_complete	equ	31h		; RAM test completed
e_ram_esc	equ	32h		; RAM test canceled
e_ext_start	equ	40h		; Start BIOS extension ROM scan
e_ext_detect	equ	41h		; BIOS extension ROM found
e_ext_init_ok	equ	42h		; BIOS extension ROM initialized
e_ext_complete	equ	43h		; BIOS extension scan complete
e_cpu_fail	equ	52h		; CPU test failed
e_low_ram_fail	equ	54h		; low RAM test failed
e_kbc_flsh_fail	equ	60h		; unable to flush KBC output buffer
e_kbc_cmd_fail	equ	61h		; unable to send command to KBC
e_kbc_test_fail	equ	62h		; keyboard controller self test failed
e_kbc_int_fail	equ	63h		; keyboard interface test failed
e_kbd_bat_fail	equ	70h		; keyboard BAT test failed
e_kbd_dis_fail	equ	71h		; keyboard disable command failed
e_kbd_ena_fail	equ	72h		; keyboard enable command failed
e_ram_fail	equ	80h		; RAM test failed
;-------------------------------------------------------------------------
; Minor numbers for keyboard errors
e_kbd_tout_fail	equ	01h		; keyboard timeout sending command
e_kbd_resp_fail	equ	02h		; keyboard no response
e_kbd_nack_fail	equ	03h		; acknowledge response was expected
					; but keyboard have sent something else
e_kbd_rsp2_fail	equ	04h		; keyboard no response byte 2 for BAT
e_kbd_nbat_fail	equ	05h		; BAT OK response was expected
					; but keyboard have sent something else
e_kbd_test_fail	equ	06h		; keyboard controller test failed
e_kbd_int_fail	equ	07h		; keyboard interface test failed
