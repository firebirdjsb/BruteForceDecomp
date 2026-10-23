/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9AE5BF25EA208189CDCCED49163E5323E0C27CCD57036FC6BA9DFDC50D4B1886
 * Entry: 0x0036df50, Ghidra index: 13300, label: D3DDevice_Swap_0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_d3d_device_x86.h"
undefined4 D3D8LTCG__D3DDevice_Swap_0(void)

{
  int iVar1;
  int iVar2;
  uint in_EAX;
  
  iVar2 = D3D8__D3D_g_pDevice;
  if ((*(int *)(D3D8__D3D_g_pDevice + 0x498) != 0) || (*(int *)(D3D8__D3D_g_pDevice + 0x49c) != 0))
  {
    FUN_00375280();
  }
  if (in_EAX == 0) {
    in_EAX = 5;
  }
  if ((*(uint *)(iVar2 + 8) & 0x4000) == 0) {
    if ((in_EAX & 4) == 0) goto LAB_0036e000;
    D3D_SetFence(2);
    iVar1 = *(int *)(iVar2 + 0x1524 + (*(int *)(iVar2 + 0x2018) - 1U & 1) * 4);
    if (iVar1 != 0) {
      D3D_BlockOnTime(iVar1,1);
    }
    *(int *)(iVar2 + 0x2018) = *(int *)(iVar2 + 0x2018) + 1;
    FUN_0036dcc0();
  }
  else {
    if ((in_EAX & 3) != 0) {
      D3D_SetFence(2);
      iVar1 = *(int *)(iVar2 + 0x1524 + (*(int *)(iVar2 + 0x2018) - 1U & 1) * 4);
      if (iVar1 != 0) {
        D3D_BlockOnTime(iVar1,1);
      }
      *(int *)(iVar2 + 0x2018) = *(int *)(iVar2 + 0x2018) + 1;
    }
    FUN_0036db30(in_EAX);
    if ((in_EAX & 4) == 0) goto LAB_0036e000;
  }
  FUN_0036df10();
LAB_0036e000:
  if (((in_EAX & 4) != 0) && ((*(int *)(iVar2 + 0x498) != 0 || (*(int *)(iVar2 + 0x49c) != 0)))) {
    FUN_00375330();
  }
  return *(undefined4 *)(iVar2 + 0x2018);
}
