/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0F3538441D49B226ED4E5098C9EA9AE347BC1BAB440FD802FC232EEC307CB8C6
 * Entry: 0x00095cf0, Ghidra index: 1826, label: FUN_00095cf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003a0f0c;
extern uint32_t PTR_LAB_003a1548;
void FUN_00095cf0(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_EAX;
  int unaff_ESI;
  
  in_EAX[1] = 0;
  in_EAX[10] = 0x3f800000;
  in_EAX[0xc] = 0x3f800000;
  in_EAX[0xd] = 0x3f800000;
  in_EAX[2] = 0;
  *(undefined1 *)(in_EAX + 0xb) = 0;
  in_EAX[0xf] = 0;
  *in_EAX = &PTR_LAB_003a1548;
  puVar1 = in_EAX + 0x11;
  *puVar1 = &PTR_LAB_003a0f0c;
  in_EAX[0x12] = 1;
  in_EAX[0x13] = in_EAX;
  iVar2 = *(int *)(unaff_ESI + 8);
  in_EAX[0x10] = iVar2;
  if (iVar2 == 0) {
    in_EAX[0x10] = puVar1;
    return;
  }
  **(int **)(unaff_ESI + 0xc) = (int)puVar1;
  return;
}
