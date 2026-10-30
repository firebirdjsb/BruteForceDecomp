/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BCFA4ACCDAEFDF8FBCDB3D46E61C4F614DED81828BB5AB4C10AC8B61F5E856B2
 * Entry: 0x0003ee50, Ghidra index: 465, label: FUN_0003ee50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0001d4c0(int param_1,int param_2,undefined4 param_3);
extern void FUN_001611d0(void);
extern void FUN_0001d800(int param_1,int param_2);

void FUN_0003ee50(void)

{
  int in_EAX;
  
  if (*(char *)(in_EAX + 0x11) != '\0') {
    if (4 < (int)(*(int *)(in_EAX + 8) - *(int *)(in_EAX + 4) & 0xfffffffcU)) {
      FUN_0001d4c0(*(int *)(in_EAX + 4),*(int *)(in_EAX + 8),*(undefined1 *)(in_EAX + 0x10),0,0);
    }
    *(undefined1 *)(in_EAX + 0x11) = 0;
  }
  FUN_001611d0();
  if (1 < *(int *)(in_EAX + 8) - *(int *)(in_EAX + 4) >> 2) {
    FUN_0001d800(*(int *)(in_EAX + 4),0,*(undefined1 *)(in_EAX + 0x10));
  }
  return;
}
