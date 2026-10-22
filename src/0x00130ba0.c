/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4A56F3A870BAA5829D534FA5FE4FEDC1BD8AC10EDAD3C6FC2BC54D290B3D5207
 * Entry: 0x00130ba0, Ghidra index: 3830, label: FUN_00130ba0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040dd4c;
extern uint32_t PTR_DAT_0040cb30;
extern char s_Sc__s_s_s_0040caf0[];
void FUN_00130ba0(char param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int unaff_ESI;
  undefined1 local_104 [260];
  
  if (param_1 == '\0') {
    FUN_002eaa19(local_104,0x104,&DAT_0040dd4c);
  }
  else {
    FUN_002eaa19(local_104,0x104,s_Sc__s_s_s_0040caf0,(&PTR_DAT_0040cb30)[unaff_ESI]);
  }
  uVar1 = FUN_002383b0();
  *param_2 = uVar1;
  return;
}
