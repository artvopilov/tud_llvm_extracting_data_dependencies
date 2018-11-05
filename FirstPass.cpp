#include "llvm/Pass.h"
#include "llvm/IR/Function.h"
#include "llvm/Support/raw_ostream.h"

using namespace llvm;

namespace {
	struct UseDef : public FunctionPass {
		static char ID;
		UseDef() : FunctionPass(ID) {}

		bool runOnFunction(Function &F) override {

			//TODO: implement UseDef-chain

			return false;
		}
	}; // end of struct UseDef
} // end of anonymous namespace

char UseDef::ID = 0;
static RegisterPass<UseDef> X("use_def", "Use_Def Chain", false, false);