/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 031342E1A731B27A235D32FCC8A22060411480AD5E9B9EEB3F9F44A5063D579A
 * Entry: 0x0029cb20, Ghidra index: 9450, label: FUN_0029cb20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s__s_too_new__version_0x_02x__expe_00403e04[];
extern char s__s_too_old__version_0x_02x__expe_00403dcc[];
extern char s_unexpected_end_of_file_in__s_00403e8c[];
extern char s_unknown_number_format_in__s__rea_00403d64[];
extern char s_unknown_number_size_in__s__read___00403d9c[];
bool FUN_0029cb20(void)

{
  int *in_EAX;
  int iVar1;
  uint uVar2;
  float10 fVar3;
  
  FUN_0029cab0();
  *in_EAX = *in_EAX + -1;
  if (*in_EAX < 0) {
    uVar2 = (*(code *)in_EAX[2])();
  }
  else {
    uVar2 = (uint)*(byte *)in_EAX[1];
    in_EAX[1] = (int)((byte *)in_EAX[1] + 1);
  }
  if (uVar2 == 0xffffffff) {
    FUN_00295370(s_unexpected_end_of_file_in__s_00403e8c,in_EAX[4]);
  }
  else {
    if (0x32 < (int)uVar2) {
      FUN_00295370(s__s_too_new__version_0x_02x__expe_00403e04,in_EAX[4],uVar2,0x32);
    }
    if (0x31 < (int)uVar2) goto LAB_0029cb90;
  }
  FUN_00295370(s__s_too_old__version_0x_02x__expe_00403dcc,in_EAX[4],uVar2,0x32);
LAB_0029cb90:
  *in_EAX = *in_EAX + -1;
  if (*in_EAX < 0) {
    uVar2 = (*(code *)in_EAX[2])();
  }
  else {
    uVar2 = (uint)*(byte *)in_EAX[1];
    in_EAX[1] = (int)((byte *)in_EAX[1] + 1);
  }
  if (uVar2 == 0xffffffff) {
    FUN_00295370(s_unexpected_end_of_file_in__s_00403e8c,in_EAX[4]);
  }
  if (uVar2 != 0) {
    if (uVar2 != 8) {
      FUN_00295370(s_unknown_number_size_in__s__read___00403d9c,in_EAX[4],uVar2,8);
      return true;
    }
    fVar3 = (float10)FUN_0029c670();
    iVar1 = FUN_002ebf10();
    if (iVar1 != 0x12b9b0a1) {
      FUN_00295370(s_unknown_number_format_in__s__rea_00403d64,in_EAX[4],(double)fVar3,0xa15be612,
                   0x41b2b9b0);
    }
  }
  return uVar2 != 0;
}
