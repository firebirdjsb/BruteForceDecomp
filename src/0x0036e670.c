/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7FED67590F18C6C776411E6830EE7979DE61722F0F6FA3C3F7EC12D97E238458
 * Entry: 0x0036e670, Ghidra index: 13308, label: FUN_0036e670
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_d3d_device_x86.h"
void FUN_0036e670(void)

{
  int iVar1;
  uint in_EAX;
  int iVar2;
  uint uVar3;
  
  iVar1 = D3D8__D3D_g_pDevice;
  uVar3 = in_EAX >> 8;
  if (*(int *)(D3D8__D3D_g_pDevice + 0x398 + uVar3 * 4) == 0) {
    iVar2 = MmAllocateContiguousMemoryEx(0x1000,0,0xffffff,0,4);
    *(int *)(iVar1 + 0x398 + uVar3 * 4) = iVar2;
    if (iVar2 == 0) {
      return;
    }
  }
  if ((*(byte *)(iVar1 + 8) & 4) == 0) {
    *(undefined4 *)((in_EAX & 0xff) * 0x10 + *(int *)(iVar1 + 0x398 + uVar3 * 4) + 0xc) = 0xffffffff
    ;
  }
  return;
}
