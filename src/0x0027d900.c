/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7E175B51E35398D60902FD7EDF2E7E7E2232F54C83DFCB3D8AE7BC13D09FBDB7
 * Entry: 0x0027d900, Ghidra index: 9002, label: FUN_0027d900
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0038ce84;
void FUN_0027d900(void)

{
  int in_EAX;
  int iVar1;
  
  FUN_0027d310();
  FUN_0027d310();
  FUN_0027d110(in_EAX + 0xb28);
  iVar1 = 0x12;
  do {
    if (*(short *)(in_EAX + 0xa76 + (uint)(byte)(&DAT_0038ce84)[iVar1] * 4) != 0) break;
    iVar1 = iVar1 + -1;
  } while (2 < iVar1);
  *(int *)(in_EAX + 0x16a0) = *(int *)(in_EAX + 0x16a0) + iVar1 * 3 + 0x11;
  return;
}
