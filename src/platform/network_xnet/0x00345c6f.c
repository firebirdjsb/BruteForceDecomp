/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BDBBEE4A9594645F2567F67A5216C5DF53755B9DAEA5B22D3584D7227E7B17DB
 * Entry: 0x00345c6f, Ghidra index: 12822, label: FUN_00345c6f
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00345c6f(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint local_14 [4];
  
  uVar5 = 0;
LAB_00345c7f:
  for (; *param_1 == 0x20; param_1 = param_1 + 1) {
  }
  if (3 < uVar5) {
LAB_00345d4d:
    if (*param_1 != 0) {
      return 0xffffffff;
    }
LAB_00345d5a:
    if (uVar5 != 1) {
      if (uVar5 == 2) {
        uVar4 = local_14[1] & 0xffffff;
        uVar5 = local_14[0] << 0x18;
      }
      else {
        if (uVar5 != 3) {
          if (uVar5 == 4) {
            local_14[0] = ((local_14[1] & 0xff | local_14[0] << 8) << 8 | local_14[2] & 0xff) << 8 |
                          local_14[3] & 0xff;
          }
          else {
            local_14[0] = 0;
          }
          goto LAB_00345dc8;
        }
        uVar4 = (local_14[1] & 0xff | local_14[0] << 8) << 0x10;
        uVar5 = local_14[2] & 0xffff;
      }
      local_14[0] = uVar4 | uVar5;
    }
LAB_00345dc8:
    return (local_14[0] & 0xff0000 | local_14[0] >> 0x10) >> 8 |
           (local_14[0] & 0xff00 | local_14[0] << 0x10) << 8;
  }
  bVar1 = *param_1;
  if (bVar1 == 0) goto LAB_00345d5a;
  uVar4 = 0;
  if (bVar1 == 0x30) {
    if ((param_1[1] == 0x78) || (uVar3 = 0x30, param_1[1] == 0x58)) {
      pbVar2 = param_1 + 2;
      param_1 = pbVar2;
      do {
        bVar1 = *param_1;
        if ((bVar1 < 0x30) || (0x39 < bVar1)) {
          if ((bVar1 < 0x61) || (0x66 < bVar1)) {
            if ((bVar1 < 0x41) || (0x46 < bVar1)) goto LAB_00345cf8;
            uVar4 = uVar4 * 0x10 + -0x37 + (uint)bVar1;
          }
          else {
            uVar4 = uVar4 * 0x10 + -0x57 + (uint)bVar1;
          }
        }
        else {
          uVar4 = (uVar4 + 0xffffffd) * 0x10 + (uint)bVar1;
        }
        param_1 = param_1 + 1;
      } while( true );
    }
    do {
      param_1 = param_1 + 1;
      uVar4 = (uVar3 - 0x30) + uVar4 * 8;
      bVar1 = *param_1;
      uVar3 = (uint)bVar1;
      if (bVar1 < 0x30) break;
    } while (bVar1 < 0x38);
  }
  else {
    if ((bVar1 < 0x31) || (0x39 < bVar1)) goto LAB_00345d4d;
    do {
      param_1 = param_1 + 1;
      uVar4 = (bVar1 - 0x30) + uVar4 * 10;
      bVar1 = *param_1;
      if (bVar1 < 0x30) break;
    } while (bVar1 < 0x3a);
  }
  goto LAB_00345d38;
LAB_00345cf8:
  if (pbVar2 == param_1) {
    return 0xffffffff;
  }
LAB_00345d38:
  for (; *param_1 == 0x20; param_1 = param_1 + 1) {
  }
  if (*param_1 == 0x2e) {
    param_1 = param_1 + 1;
  }
  local_14[uVar5] = uVar4;
  uVar5 = uVar5 + 1;
  goto LAB_00345c7f;
}
