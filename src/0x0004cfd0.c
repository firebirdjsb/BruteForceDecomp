/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 008AEE1A0FD8B2755A66DD790CD8284670A29C9EDE57FC49D618E7348576E7B6
 * Entry: 0x0004cfd0, Ghidra index: 645, label: FUN_0004cfd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

char FUN_0004cfd0(int param_1)

{
  char cVar1;
  int in_EAX;
  int in_ECX;
  int iVar2;
  bool bVar3;
  float local_30;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  FUN_0004cea0();
  FUN_0004cea0();
  local_30 = SQRT((local_c - local_18) * (local_c - local_18) +
                  (local_8 - local_14) * (local_8 - local_14) +
                  (local_4 - local_10) * (local_4 - local_10));
  bVar3 = 0.01 < local_30;
  if (bVar3) {
    rcpss(ZEXT416((uint)local_30),ZEXT416((uint)local_30));
  }
  if ((*(int *)(*(int *)(in_ECX + 0xc) + 4) == 0x18) ||
     (*(int *)(*(int *)(param_1 + 0xc) + 4) == 0x18)) {
    local_30 = local_30 * 0.9;
  }
  if (!bVar3) {
    return '\x01';
  }
  if (in_EAX != 0) {
    *(int *)(in_EAX + 4 + *(int *)(in_EAX + 0x104) * 4) = in_ECX;
    iVar2 = *(int *)(in_EAX + 0x104) + 1;
    *(int *)(in_EAX + 0x104) = iVar2;
    *(int *)(in_EAX + 4 + iVar2 * 4) = param_1;
    *(int *)(in_EAX + 0x104) = *(int *)(in_EAX + 0x104) + 1;
    *(uint *)(in_EAX + 0x10c) = *(uint *)(in_EAX + 0x10c) | 0x150;
  }
  cVar1 = FUN_000df6f0(*(undefined4 *)(in_ECX + 8),local_30);
  return '\x01' - (cVar1 != '\0');
}
