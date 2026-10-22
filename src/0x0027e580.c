/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8358708E600B6F9F067D56692D9392F122F720D7E717DC538F6BBC53154E445B
 * Entry: 0x0027e580, Ghidra index: 9010, label: FUN_0027e580
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0027e580(void)

{
  int in_EAX;
  int iVar1;
  
  if (8 < *(int *)(in_EAX + 0x16b4)) {
    *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
         *(undefined1 *)(in_EAX + 0x16b0);
    iVar1 = *(int *)(in_EAX + 0x14) + 1;
    *(int *)(in_EAX + 0x14) = iVar1;
    *(undefined1 *)(iVar1 + *(int *)(in_EAX + 8)) = *(undefined1 *)(in_EAX + 0x16b1);
    *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
    *(undefined2 *)(in_EAX + 0x16b0) = 0;
    *(undefined4 *)(in_EAX + 0x16b4) = 0;
    return;
  }
  if (0 < *(int *)(in_EAX + 0x16b4)) {
    *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
         *(undefined1 *)(in_EAX + 0x16b0);
    *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
  }
  *(undefined2 *)(in_EAX + 0x16b0) = 0;
  *(undefined4 *)(in_EAX + 0x16b4) = 0;
  return;
}
