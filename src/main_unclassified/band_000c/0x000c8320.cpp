/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 50FDB9A632F298EBE4A8051C00193CABD640591DA80591070558BFC1281D3FE5
 * Entry: 0x000c8320, Ghidra index: 2459, label: FUN_000c8320
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern undefined4 FUN_000ba320(void);
extern uint FUN_000c8470(void);
extern undefined4 FUN_000c8640(void);
extern undefined4 FUN_000bb220(void);
extern undefined4 FUN_000c8410(void);

undefined1 FUN_000c8320(void)

{
  float fVar1;
  undefined1 uVar2;
  char cVar3;
  int in_EAX;
  int iVar4;
  int in_ECX;
  int in_EDX;
  undefined1 local_1;
  
  local_1 = 0;
  uVar2 = local_1;
  local_1 = 0;
  fVar1 = *(float *)(in_EDX + 0x60 + in_EAX * 4);
  if (fVar1 < 0.0 != (fVar1 == 0.0)) {
    *(undefined4 *)(in_EDX + 0x60 + in_EAX * 4) = 0x3e99999a;
    local_1 = uVar2;
    if (in_ECX == 0) {
      iVar4 = FUN_000ba320();
      if ((iVar4 != 0) && (cVar3 = FUN_000c8470(), cVar3 != '\0')) {
        cVar3 = FUN_000c8640();
        if (cVar3 == '\0') {
          FUN_000bb220(0xd93fbd9);
          return 1;
        }
        FUN_000bb220(0xfac5d6b4);
        return 1;
      }
    }
    else if (((in_ECX == 1) && (iVar4 = FUN_000ba320(), iVar4 != 0)) &&
            (cVar3 = FUN_000c8470(), cVar3 != '\0')) {
      FUN_000c8410();
      *(undefined4 *)(in_EDX + 0x58) = 0;
      *(undefined1 *)(in_EDX + 0x5c) = 0;
      local_1 = 1;
    }
  }
  return local_1;
}
