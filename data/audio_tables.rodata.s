.include "macro.inc"

# assembler directives
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches
.set gp=64     # allow use of 64-bit general purpose registers

.section .rodata

.balign 16

.balign 16
glabel gSoundFontTable
    .incbin "assets/sound/table_font.bin"

.balign 16
glabel gSequenceFontTable
    .incbin "assets/sound/table_seqfont.bin"

.balign 16
glabel gSequenceTable
    .incbin "assets/sound/table_seq.bin"

.balign 16
glabel gSampleBankTable
    .incbin "assets/sound/table_sample.bin"