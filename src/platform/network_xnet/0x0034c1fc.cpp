/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9EFD726E7F07065704CE199CF058F8034C53834525367A48828712EE0B40495F
 * Entry: 0x0034c1fc, Ghidra index: 12951, label: FUN_0034c1fc
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0034c1fc(uint *param_1,uint *param_2,uint *param_3,uint *param_4,int *param_5,char *param_6
                 ,undefined1 *param_7)

{
  byte bVar1;
  int in_ECX;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int local_10;
  uint local_c;
  uint local_8;
  
  uVar4 = *(uint *)(in_ECX + 8);
  uVar2 = uVar4 >> 4 & 7;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  bVar1 = (byte)uVar4 & 7;
  uVar5 = uVar4 >> 5 & 0x7f8;
  cVar3 = (char)uVar2 * ' ';
  if (4 < bVar1) {
    uVar4 = uVar4 >> 0x10 & 3;
    local_8 = uVar4 * 2;
    cVar3 = cVar3 + (char)uVar4;
    if (bVar1 == 6) {
      cVar3 = cVar3 + '\x04';
    }
    else if (bVar1 == 5) {
      cVar3 = cVar3 + '\x01';
      local_8 = local_8 + 0xc;
    }
    local_c = uVar2;
    if (local_8 <= uVar2) {
      local_c = local_8;
    }
    if (bVar1 == 7) {
      local_10 = ((*(ushort *)(in_ECX + 4) - local_8) - uVar5) + -0x2c + local_c;
      if ((char)*(undefined4 *)(in_ECX + 8) < '\0') {
        cVar3 = cVar3 + '\a';
      }
      else if (uVar5 == 0) {
        cVar3 = cVar3 + '\n';
      }
      else {
        cVar3 = cVar3 + '\r';
      }
    }
  }
  *param_1 = uVar5;
  *param_2 = uVar2;
  *param_3 = local_c;
  *param_4 = local_8;
  *param_5 = local_10;
  if (param_6 != (char *)0x0) {
    *param_6 = cVar3;
  }
  if ((param_7 != (undefined1 *)0x0) && ((*(byte *)(in_ECX + 8) & 0x80) != 0)) {
    *param_7 = (char)(uVar5 >> 3);
  }
  return;
}
