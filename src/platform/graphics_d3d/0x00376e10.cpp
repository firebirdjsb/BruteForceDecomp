/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 64EBC041B1D647BB11177845ED940CDF36A0CE43369CD045C4930D9881590942
 * Entry: 0x00376e10, Ghidra index: 13453, label: FUN_00376e10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_d3d_device_x86.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037b958;
/* XBE x86 REP STOSD clears 0x30 DWORDs starting at guest address 0x0037b950. */
extern uint32_t D3D8LTCG__D3D_g_Stream;
void FUN_00376e10(void)

{
  uint *puVar1;
  uint uVar2;
  int *in_EAX;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *puVar6;
  int local_4;
  
  if (*in_EAX != 0) {
    D3D8LTCG__D3D_BlockOnTime(*(undefined4 *)(D3D8__D3D_g_pDevice + 0x2c),2);
    *(uint *)*in_EAX = (in_EAX[9] & 0xfffffffU) + 1;
    *in_EAX = in_EAX[9];
    D3D8LTCG__CDevice_KickOff_0__LTCG_edx1();
    if (((in_EAX[9] ^ *(uint *)(in_EAX[0x5f0] + 0x44)) & 0xfffffff) != 0) {
      do {
        local_4 = 400;
        do {
          local_4 = local_4 + -1;
        } while (local_4 != 0);
      } while ((*(uint *)(in_EAX[0x5f0] + 0x44) & 0xfffffff) != (in_EAX[9] & 0xfffffffU));
    }
  }
  do {
  } while ((in_EAX + 0x5f2)[(in_EAX[0x661] & 1U) * 3 + 0x5d] != 0);
  D3D8LTCG__CDevice_FreeFrameBuffers_4(in_EAX);
  if (in_EAX[9] != 0) {
    MmFreeContiguousMemory(in_EAX[9]);
  }
  if (in_EAX[0x12] != 0) {
    XAPILIB__LocalFree(in_EAX[0x12]);
  }
  puVar1 = (uint *)in_EAX[0xe2];
  if ((puVar1 != (uint *)0x0) &&
     (uVar4 = *puVar1, *puVar1 = uVar4 - 0x80000, (uVar4 - 0x80000 & 0x78ffff) == 0)) {
    D3D8LTCG__D3D_DestroyResource__LTCG();
  }
  piVar5 = in_EAX + 0x2d2;
  iVar3 = 4;
  do {
    puVar1 = (uint *)piVar5[-4];
    if ((puVar1 != (uint *)0x0) &&
       (uVar4 = *puVar1, *puVar1 = uVar4 - 0x80000, (uVar4 - 0x80000 & 0x78ffff) == 0)) {
      D3D8LTCG__D3D_DestroyResource__LTCG();
    }
    puVar1 = (uint *)*piVar5;
    if ((puVar1 != (uint *)0x0) &&
       (uVar4 = *puVar1, *puVar1 = uVar4 - 0x80000, (uVar4 - 0x80000 & 0x78ffff) == 0)) {
      D3D8LTCG__D3D_DestroyResource__LTCG();
    }
    piVar5 = piVar5 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  uVar4 = 0;
  do {
    puVar1 = *(uint **)((int)&DAT_0037b958 + uVar4);
    if ((puVar1 != (uint *)0x0) &&
       (uVar2 = *puVar1, *puVar1 = uVar2 - 0x80000, (uVar2 - 0x80000 & 0x78ffff) == 0)) {
      D3D8LTCG__D3D_DestroyResource__LTCG();
    }
    uVar4 = uVar4 + 0xc;
  } while (uVar4 < 0xc0);
  piVar5 = in_EAX + 0xe6;
  iVar3 = 0x40;
  do {
    if (*piVar5 != 0) {
      MmFreeContiguousMemory(*piVar5);
    }
    piVar5 = piVar5 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if (in_EAX[0x80a] != 0) {
    MmFreeContiguousMemory(in_EAX[0x80a]);
  }
  if (in_EAX[0xe3] != 0) {
    XAPILIB__LocalFree(in_EAX[0xe3]);
  }
  iVar3 = in_EAX[0x5f2];
  if (iVar3 != 0) {
    *(undefined4 *)(iVar3 + 0x140) = 0;
    FUN_00374895();
  }
  puVar6 = &D3D8LTCG__D3D_g_Stream;
  for (iVar3 = 0x30; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  return;
}
