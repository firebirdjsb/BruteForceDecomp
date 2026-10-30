/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 057687611FECB52B568C45F0EAADADCBBCF111D8EED441B03157E6852DA0378E
 * Entry: 0x001658c0, Ghidra index: 4701, label: FUN_001658c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_0039a864;
extern uint32_t PTR_LAB_0039a87c;
void FUN_001658c0(void)

{
  undefined4 *in_EAX;
  undefined4 *puVar1;
  int iVar2;
  
  in_EAX[1] = 0;
  *in_EAX = PTR_LAB_0039a864;
  puVar1 = in_EAX + 3;
  iVar2 = 0x1b;
  do {
    *puVar1 = PTR_LAB_0039a87c;
    puVar1[3] = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[4] = 0;
    puVar1 = puVar1 + 5;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  in_EAX[2] = 0;
  return;
}
