/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A733D316C2A40367EB5E73E881BAB46B42DABB92FEAF150245DD0CC72BE34DBA
 * Entry: 0x0009b340, Ghidra index: 1860, label: FUN_0009b340
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003a0e5c;
extern uint32_t PTR_LAB_003a0f0c;
extern uint32_t PTR_LAB_003a1088;
void FUN_0009b340(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_EAX;
  int unaff_ESI;
  
  in_EAX[1] = 0;
  in_EAX[2] = 0;
  *(undefined1 *)(in_EAX + 0x16) = 0;
  *in_EAX = PTR_LAB_003a1088;
  in_EAX[3] = PTR_LAB_003a0e5c;
  puVar1 = in_EAX + 0x18;
  *puVar1 = PTR_LAB_003a0f0c;
  in_EAX[0x19] = 1;
  in_EAX[0x1a] = *in_EAX;
  iVar2 = *(int *)(unaff_ESI + 8);
  in_EAX[0x17] = iVar2;
  if (iVar2 == 0) {
    in_EAX[0x17] = *puVar1;
    return;
  }
  **(int **)(unaff_ESI + 0xc) = (int)puVar1;
  return;
}
