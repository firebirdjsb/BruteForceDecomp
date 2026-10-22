/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 882EAE91646695246A3CDC92E1F892C51C2F547F8A6A0ED1FC9F9424634FD6CC
 * Entry: 0x001b3340, Ghidra index: 5638, label: FUN_001b3340
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b3340(int *param_1)

{
  int in_EAX;
  int iVar1;
  
  iVar1 = FUN_002ea01d(0x38);
  if (iVar1 != 0) {
    FUN_000fdc90(in_EAX);
    *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(in_EAX + 0x28);
    *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(in_EAX + 0x2c);
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(in_EAX + 0x30);
    *(undefined4 *)(iVar1 + 0x34) = 0;
    FUN_000fdba0();
    *param_1 = iVar1;
    return;
  }
  *param_1 = 0;
  return;
}
