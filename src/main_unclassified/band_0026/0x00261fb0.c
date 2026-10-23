/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CCCB1036388E1081DD57AE02BDF946D114D0DCE7A6D7143B902C406E6B4C0166
 * Entry: 0x00261fb0, Ghidra index: 8651, label: FUN_00261fb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00392c68;
extern uint32_t PTR_LAB_00392cc4;
void FUN_00261fb0(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_EAX;
  int unaff_ESI;
  
  in_EAX[1] = 0;
  *in_EAX = &PTR_LAB_00392c68;
  puVar1 = in_EAX + 8;
  *puVar1 = &PTR_LAB_00392cc4;
  in_EAX[9] = 1;
  in_EAX[10] = in_EAX;
  iVar2 = *(int *)(unaff_ESI + 8);
  in_EAX[7] = iVar2;
  if (iVar2 == 0) {
    in_EAX[7] = puVar1;
    return;
  }
  **(int **)(unaff_ESI + 0xc) = (int)puVar1;
  return;
}
