module.exports = {  
  getTransformModulePath() {
    return require.resolve('./config/transformers.js')
  }
}
