/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7CA383AE491BA94B16A423805A995E09197E2E20974FD7834851022BD2BED16C
 * Entry: 0x000d4210, Ghidra index: 2641, label: FUN_000d4210
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern uint FUN_000d14d0(void);

void FUN_000d4210(void)

{
  char cVar1;
  int in_EAX;
  
  do {
    cVar1 = FUN_000d14d0();
    if (cVar1 == '\0') {
      *(undefined4 *)(in_EAX + 8) = 0;
      return;
    }
  } while (*(int *)(in_EAX + 8) == 0);
  *(int *)(in_EAX + 8) = *(int *)(in_EAX + 8);
  return;
}
