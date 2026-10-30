/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6746007F461671607BE365A64AB95FE9D3A4BB3DCD91AD41AA5F34ECBC1B6ABC
 * Entry: 0x00378e93, Ghidra index: 13475, label: FUN_00378e93
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00378e93(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *unaff_ESI;
  uint local_8;
  
  iVar1 = *unaff_ESI;
  unaff_ESI[0x53] = *(int *)(iVar1 + 0x100200);
  unaff_ESI[0x54] = *(int *)(iVar1 + 0x100204);
  unaff_ESI[0x2c] = ((*(uint *)(iVar1 + 0x1218) & 0x100) != 0x100) + 2;
  iVar2 = MmClaimGpuInstanceMemory(0x5000,&local_8);
  unaff_ESI[4] = iVar2 + -0x5000;
  unaff_ESI[0x4c] = local_8 + 0x700000;
  *(uint *)(iVar1 + 0x2210) = local_8 >> 8 & 0x1f0 | 0x3000000;
  unaff_ESI[0x4a] = local_8 + 0x701000;
  unaff_ESI[0x4b] = local_8 + 0x701080;
  *(uint *)(iVar1 + 0x2214) =
       (local_8 + 0x701080 & 0x1fc00 | 0x200) << 7 | (uint)unaff_ESI[0x4a] >> 8 & 0x1fc;
  unaff_ESI[0x58] = local_8 + 0x10a0 >> 4;
  /* XBE 0x00378F52..0x00378F5D: lea ecx,[edi+0x100214];
   * mov eax,[ecx]; and eax,0xfffffffe; mov [ecx],eax.
   * Preserve the 32-bit Xbox GPU guest address, not a host function. */
  uint32_t guest_gpu_control =
      (uint32_t)iVar1 + UINT32_C(0x00100214);
  *(uint32_t *)(uintptr_t)guest_gpu_control =
      *(const uint32_t *)(uintptr_t)guest_gpu_control & UINT32_C(0xFFFFFFFE);
  uVar3 = 0x700000;
  do {
    iVar2 = local_8 + uVar3;
    uVar3 = uVar3 + 4;
    *(undefined4 *)(iVar2 + iVar1) = 0;
  } while (uVar3 < 0x705000);
  iVar1 = unaff_ESI[0x58];
  unaff_ESI[0x58] = iVar1 + 8;
  unaff_ESI[0x50] = iVar1;
  return;
}
