/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 36AB0744968CB258BBF98A771CA96C535969B858B33EC47E3BEEAC4CB67999C6
 * Entry: 0x000bb3d0, Ghidra index: 2272, label: FUN_000bb3d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000bb3d0(void)

{
  char cVar1;
  int *in_ECX;
  float local_20;
  float local_1c;
  float local_18;
  int local_14;
  float local_10;
  int local_c;
  int local_8;
  int local_4;
  
  local_18 = 0.0;
  local_1c = 0.0;
  local_20 = 0.0;
  if ((in_ECX[10] != 0) && (*(int *)(*(int *)(in_ECX[10] + 8) + 0x10) != 0)) {
    local_10 = (float)in_ECX[0xe];
    local_14 = in_ECX[0xd];
    local_c = in_ECX[0xc];
    local_8 = local_14;
    local_4 = (int)local_10;
    cVar1 = FUN_0006e270(&local_20,&local_1c,&local_18,&local_c);
    if (cVar1 != '\0') {
      local_10 = local_1c - (float)((int)(short)in_ECX[3] / 2);
      *(short *)(in_ECX + 2) =
           (short)(int)(local_20 - (float)((int)*(short *)((int)in_ECX + 0xe) / 2));
      *(short *)((int)in_ECX + 10) = (short)(int)local_10;
      in_ECX[0xf] = (int)(1.0 / local_18);
      (**(code **)(*in_ECX + 0x2c))();
      return;
    }
    in_ECX[0xf] = 0x3f800000;
  }
  return;
}
