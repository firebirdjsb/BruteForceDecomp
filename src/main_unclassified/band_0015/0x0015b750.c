/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C754D51346719823EB3C201732CE28103C03155A60CAF25FCBD32E70379A0EC5
 * Entry: 0x0015b750, Ghidra index: 4528, label: FUN_0015b750
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0015b750(undefined4 param_1)

{
  char cVar1;
  int *in_EAX;
  int iVar2;
  
  iVar2 = 0;
  do {
    in_EAX = in_EAX + 1;
    if ((int *)*in_EAX != (int *)0x0) {
      cVar1 = (**(code **)(*(int *)*in_EAX + 4))(param_1);
      if (cVar1 != '\0') {
        return 0;
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  return 1;
}
