/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7A175F3557C5AFE0E3822533CAA0A3B67805A227387ECD61A832F8E9A66059D9
 * Entry: 0x0027c260, Ghidra index: 8974, label: FUN_0027c260
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00391c20;
extern uint32_t PTR_FUN_00399efc;
extern uint32_t PTR_FUN_0039c2a0;
extern uint32_t PTR_LAB_00391c08;
extern uint32_t PTR_LAB_00391ce8;
extern uint32_t PTR_LAB_00391d1c;
void FUN_0027c260(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_EAX;
  int unaff_ESI;
  
  in_EAX[1] = PTR_FUN_00399efc;
  in_EAX[2] = PTR_FUN_0039c2a0;
  in_EAX[3] = 0;
  *in_EAX = PTR_FUN_00391c20;
  in_EAX[1] = PTR_LAB_00391d1c;
  in_EAX[2] = PTR_LAB_00391c08;
  puVar1 = in_EAX + 0x1d;
  *puVar1 = PTR_LAB_00391ce8;
  in_EAX[0x1e] = 1;
  in_EAX[0x1f] = *in_EAX;
  iVar2 = *(int *)(unaff_ESI + 8);
  in_EAX[0x1c] = iVar2;
  if (iVar2 == 0) {
    in_EAX[0x1c] = *puVar1;
    return;
  }
  **(int **)(unaff_ESI + 0xc) = (int)puVar1;
  return;
}
