/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9CB54FB5A6E0186FA1590917FF23225A016DCFDE79E4AE2D3B55A46FF8456520
 * Entry: 0x00200400, Ghidra index: 7251, label: FUN_00200400
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Callee 0x001FEDB0 views this existing DWORD buffer bytewise.
 * reinterpret_cast preserves the source buffer address and does not
 * translate guest VAs to host memory. Original Xbox ABI_UNVERIFIED. */
extern char FUN_001fedb0(undefined4 flag, int *key, byte *data);
#include "bf_x86_word_lanes.h"
char FUN_00200400(undefined4 param_1,int *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  char cVar4;
  int in_ECX;
  
  puVar3 = param_3;
  piVar2 = param_2;
  uVar1 = param_1;
  cVar4 = FUN_001fedb0(param_1,param_2,reinterpret_cast<byte *>(param_3));
  /* 0x0020041c writes just AL to the reused third input slot. The later
   * 0x00200445 read is one byte; puVar3 preserves the original pointer. */
  bf_x86_word_store_byte(&param_3,0U,(uint8_t)cVar4);
  if (cVar4 == '\0') {
    param_1 = 0xfe604ae;
    FUN_000ee560(*(undefined4 *)(in_ECX + 0x10),uVar1,&param_1,piVar2,2);
    cVar4 = (char)bf_x86_word_load_byte(&param_3,0U);
    if ((bf_x86_word_load_byte(&param_3,0U) == 0U) && (*param_2 == 0xede4719)) {
      if ((char)uVar1 != '\0') {
        *puVar3 = *(undefined4 *)(in_ECX + 0x48);
        return '\x01';
      }
      *(undefined4 *)(in_ECX + 0x48) = *puVar3;
      cVar4 = '\x01';
    }
  }
  return cVar4;
}
